#include<iostream>
#include<vector>
using namespace std;
void  removeOne(vector<int> &arr,vector<int> &ans,int idx){
    if(idx==arr.size()){
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    }
    int ele = arr[idx];
    if(ele==1) removeOne(arr,ans,idx+1);
    else {
        ans.push_back(ele);
        removeOne(arr,ans,idx+1);
    }
}
int main(){
    vector<int> arr={1,2,3,11,4,1,7};
    vector<int> ans;
    int n=7;
    removeOne(arr,ans,0);
}