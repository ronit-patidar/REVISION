//sort the array of '0' s and '1' s.
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,1,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int noz=0; // no of zeroes
    int noo=1; // no of ones
    for(int i=0;i<n;i++){ // counting no of zeroes and ones
        if(arr[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){ // filling 0s and 1s
        if(i<noz) arr[i]=0;
        else arr[i]=1;
    }
    for(int i=0;i<n;i++){ // printing
        cout<<arr[i]<<" ";
    }
}