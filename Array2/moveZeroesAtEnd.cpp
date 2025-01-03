#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) { 
        int k=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[k],nums[i]);
                k++;
            }
        }
    }
};
int main(){
    Solution sol;
    vector<int> arr={0,1,0,3,12};
    sol.moveZeroes(arr);
    for(auto ele : arr){
        cout<<ele<<" ";
    }
}