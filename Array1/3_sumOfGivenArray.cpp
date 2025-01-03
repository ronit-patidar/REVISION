#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //int arr[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum<<endl;
}

