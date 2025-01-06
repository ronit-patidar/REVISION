#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][4]={29,81,20,89,43,8,0,10,94,23,43,100};
    int m=3;
    int n=4;
    int maxi=INT_MIN;
    int smax=INT_MIN;
    int mini=INT_MAX;
    int smin=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           maxi=max(maxi,arr[i][j]);
           mini=min(mini,arr[i][j]);
        }
    }
    // maxi = 100
    // mini = 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=maxi && arr[i][j]>smax) smax=arr[i][j]; // 29 81 89 94 
            if(arr[i][j]!=mini && arr[i][j]<smin) smin=arr[i][j];
        }
    }
    cout<<"Maximum element : "<<maxi<<endl; // 100
    cout<<"Second Maximum element : "<<smax<<endl; // 94
    cout<<"Minimum element : "<<mini<<endl; // 0
    cout<<"Second Minimum element : "<<smin<<endl; // 8
    return 0 ;
} 