// leetcode : 1304
// link : https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2!=0) ans.push_back(0);
        for(int i=1;i<=(n/2);i++){
            ans.push_back(i);
            ans.push_back(-i);
        }
        return ans;
    }
};
int main(){
    Solution sol;
    int n=5;
    int m=3;
    vector<int> ans = sol.sumZero( n);
    for(auto ele:ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> res = sol.sumZero( m);
        for(auto ele:res){
        cout<<ele<<" ";
    }

}