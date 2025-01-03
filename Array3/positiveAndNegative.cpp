// move all positive to end and negative to begining with constant extra space
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,-2,3,-4,-5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[j]>0) j--;
        if(arr[i]<0) i++;
        //if(i>j) break; // dry run
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}