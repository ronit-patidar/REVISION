#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;
int Max(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i] > maxi ) maxi = arr[i];
    }
    return maxi;
}
int Min(int arr[],int n){
    int mini = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] < mini) mini = arr[i];
    }
    return mini;
}
int smax(int arr[],int n){
    int maxi = Max(arr,n);
    int smax=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]!=maxi && arr[i]>smax) smax=arr[i];
    }
    return smax;
}
int smaxOnepass(int arr[],int n){
    int maxi = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            smax=maxi;
            maxi=arr[i];
        }
    }
    return smax;
}
int smin(int arr[],int n){
    int mini = Min(arr,n);
    int smin=INT_MAX;
    for(int i=0;i<n;i++){
       if(mini!=arr[i] && arr[i]<smin ) smin=arr[i];
    }
    return smin;
}
int main(){
    int arr[]={1,0,-8,2,-4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=Max(arr,n);
    int Smax=smax(arr,n);
    int Smax2=smaxOnepass(arr,n);
    int mini=Min(arr,n);
    int Smin=smin(arr,n);
    cout<<"Max ele : "<<maxi<<endl;
    cout<<"Min ele : "<<mini<<endl;
    cout<<"SMax ele : "<<Smax<<endl;
    cout<<"SMin ele : "<<Smin<<endl;
    cout<<"Smax ele : "<<Smax2<<endl;
}