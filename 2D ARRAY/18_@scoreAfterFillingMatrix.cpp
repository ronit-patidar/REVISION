// leeetcode : 861
// link : https://leetcode.com/problems/score-after-flipping-matrix
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // Making elements of the first column 1's
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) { // Flip row
                for (int j = 0; j < n; j++) {
                    grid[i][j] = 1 - grid[i][j]; // Proper flipping
                }
            }
        }
        // Flip columns where zeros are greater than ones
        for (int j = 1; j < n; j++) { // Start from the second column
            int noz = 0; // Number of zeros
            int noo = 0; // Number of ones
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0) noz++;
                else noo++;
            }
            if (noz > noo) { // Flip column
                for (int i = 0; i < m; i++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }

        // Calculate the final sum
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int x = 1;
            for (int j = n - 1; j >= 0; j--) {
                sum += grid[i][j] * x;
                x *= 2;
            }
        }
        return sum;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> grid={{0,0,1,1},{1,0,1,0},{1,1,0,0}};
    int ans = sol.matrixScore(grid);
    cout<<ans;
    return 0;
}