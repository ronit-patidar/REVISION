//sort the array of '0' s and '1' s.
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,1,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[j]==1) j--;
        if(arr[i]==0) i++;
        if(i>j) break; // dry run
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}