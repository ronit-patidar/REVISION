#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void helper(vector<int>& nums,vector<int> ans,vector<vector<int>>& finalans,int idx){
    if(idx==nums.size()){
        finalans.push_back(ans);
        return;
    }
    helper(nums,ans,finalans,idx+1);
    ans.push_back(nums[idx]);
    helper(nums,ans,finalans,idx+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        helper(nums,ans,finalans,0);
        return finalans;
    }
};
int main(){
      Solution sol;
    vector<int> nums1 = {1, 2, 3};
    vector<vector<int>> result1 = sol.subsets(nums1);
    for(int i=0;i<result1.size();i++){
        cout<<"{";
        for(int j=0;j<result1[i].size();j++){
            cout<<result1[i][j];
        }
        cout<<"}"<<endl;
    }
}