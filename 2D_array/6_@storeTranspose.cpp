// leetcode : 867
// link : https://leetcode.com/problems/transpose-matrix
#include <vector>
#include<iostream>
using namespace std;





class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();      // Rows
        int n = matrix[0].size();   // Columns

        vector<vector<int>> t(n, vector<int>(m));  

        // Transpose the matrix by swapping rows and columns
        for(int i = 0; i < m; i++) {           
            for(int j = 0; j < n; j++) {  
                t[i][j] = matrix[j][i]; 
            }
        }
        return t;
    }
};

int main(){
    Solution sol;  // Create an instance of Solution class
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<vector<int>> result1 = sol.transpose(matrix1);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<result1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
