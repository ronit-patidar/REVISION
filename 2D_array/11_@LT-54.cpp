#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace  std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int minr=0;
    int maxr=matrix.size()-1;
    int minc=0;
    int maxc=matrix[0].size()-1;
    vector<int> ans;
    while(minr <= maxr && minc <= maxc){
        // right
        for(int j=minc;j<=maxc;j++){
            ans.push_back(matrix[minr][j]);
        }
        minr++;
        // down
        if(minr > maxr || minc > maxc) break;
        for(int i=minr;i<=maxr;i++){
            ans.push_back(matrix[i][maxc]);
        }
        maxc--;
        // left
        if(minr > maxr || minc > maxc) break;
        for(int j=maxc;j>=minc;j--){
            ans.push_back(matrix[maxr][j]);
        }
        maxr--;
        // down
        if(minr > maxr || minc > maxc) break;
        for(int i=maxr;i>=minr;i--){
            ans.push_back(matrix[i][minc]);
        }
        minc++;
    }
    return ans;
    }
};
int main(){
    Solution sol;
    vector< vector<int> > matrix={{1,2,3,4},
                                  {5,6,7,8},
                                  {9,10,11,12}};
    // 1 2 3 4 8 12 11 10 9 5 6 7
    vector<int> ans = sol.spiralOrder(matrix);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    
}
