// leetcode : 867
// link : https://leetcode.com/problems/transpose-matrix
#include<iostream>
using namespace std;
// no of rows should be equal to no of columns
// a[m][n] then transpose b[n][m]
// we have to swap half matrix to obtain transpose 
// if i swap whole matrix then original matrix is obtain
int main(){
    int m=3; // row no
    int n=3; // column no
    int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Original array : "<<endl;
    for(int i=0;i<m;i++){  // original
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){ // O(n*n) , O(1)
        for(int j=i+1;j<n;j++){ // imp
            swap(arr[i][j],arr[j][i]);
        }
    }
    cout<<"Transpose array : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}