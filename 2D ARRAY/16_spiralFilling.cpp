#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>> spiralfilling(int n){
        vector<vector<int>> ans(n,vector<int>(n));
        int count=1;
        int n2=n*n;
        int minr=0;
        int minc=0;
        int maxr=ans.size()-1;
        int maxc=ans[0].size()-1;
        while(count <= n2){
            for(int i=minc;i<=maxc && count <= n2;i++){
                ans[minr][i] = count++;
            }
            minr++;
            for(int j=minr;j<=maxr && count <= n2;j++){
                ans[j][maxc] = count++;
            }
            maxc--;
            for(int k=maxc;k>=minc && count <= n2;k--){
                ans[maxr][k] = count++;
            }
            maxr--;
            for(int l=maxr;l>=minr && count <= n2;l--){
                ans[l][minc] = count++;
            }
            minc++;
        }
        return ans;
    }
};
int main(){
    int n=3;
    Solution sol;
    vector<vector<int>> ans = sol.spiralfilling(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}