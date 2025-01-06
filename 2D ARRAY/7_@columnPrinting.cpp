#include<iostream>
using namespace std;
int main(){
    int m=4;
    int n=3;
    int arr[m][n]={{1,2,3},
                   {4,5,6},
                   {7,8,9},
                   {10,11,12}
                   };
    // print : 1 4 7 10 2 5 8 11 3 6 9 12
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
    }
    cout<<endl;
    // print : 1 4 7 8 5 2 3 6 9
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}