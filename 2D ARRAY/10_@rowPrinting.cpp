#include <iostream>
using namespace std;
int main() {
    // int m, n;
    // cout << "Enter number of rows: ";
    // cin >> m;
    // cout << "Enter number of columns: ";
    // cin >> n;
    // int arr[m][n];
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<endl;
    int m=3;
    int n=3;
    int arr[m][n]={{1,2,3},{4,5,6},{7,8,9}};

    // 1 2 3
    // 4 5 6
    // 7 8 9

    // wave : 1 2 3 6 5 4 7 8 9 
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }        
    }
    cout<<endl;
    // wave 2 : 3 2 1 4 5 6 9 8 7
    for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }  
    }
    cout<<endl;
    // wave 3 : 7 8 9 6 5 4 1 2 3
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}
