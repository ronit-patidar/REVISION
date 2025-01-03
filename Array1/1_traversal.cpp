#include<iostream>
using namespace std;
//  i -> rool no
//  arr[i]  -> marks
//  if marks is strictly lesser  than 35 then print its roll bno that is i.
int main(){
    int arr[]={90,30,32,85,34,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]<35) cout<<i<<" ";
    }
}