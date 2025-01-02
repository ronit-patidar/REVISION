#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n,int idx){ //print
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    print(arr,n,idx+1);
}
void display(vector<int>& v,int idx){ // store
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    print(arr,n,0);
    cout<<endl;
    display(v,0);
}