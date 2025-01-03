// leetcode : 119
// link : https://leetcode.com/problems/pascals-triangle-ii

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i=0;i<=rowIndex;i++){
            vector<int>res(i+1);
            ans.push_back(res);
        }
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0 ) ans[i][j]=1;
                else ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans[rowIndex];
    }
};
int main(){
    Solution sol;
    int rowIndex=4;
    vector<int> ans  =  sol.getRow(rowIndex);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}