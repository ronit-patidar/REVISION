#include<iostream>
#include<climits>
using namespace std;
void Max(int arr[],int n,int idx,int max){
     if(idx==n) {
        cout<<max;
        return;
     }
     if(arr[max]<arr[idx]) max=arr[idx];
     Max(arr,n,idx+1,max);
}
int main(){
    int arr[]={1,2,3,4,5,2,7,3,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Max(arr,n,0,INT_MIN);
}