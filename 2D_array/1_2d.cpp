#include<iostream>
using namespace std;
int main(){
    // 1 ) initilizing and declaration

        // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        // int arr[3][3]={1,2,3,4,5,6,7,8,9};
        // cout<<arr[0][0]<<" ";
        // cout<<arr[0][1]<<" ";
        // cout<<arr[0][2]<<" ";
        // cout<<arr[1][0]<<" ";
        // cout<<arr[1][1]<<" ";
        // cout<<arr[1][2]<<" ";
        // cout<<arr[2][0]<<" ";
        // cout<<arr[2][1]<<" ";
        // cout<<arr[2][2]<<" ";

    // 2 ) traversal  

        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

    // 3 )  taking AS INPUT 

        int m;
        cout<<"Enter row no : ";
        cin>>m;
        int n;
        cout<<"Enter column no : ";
        cin>>n;
        cout<<endl;
        int arr[m][n];
        for(int i=0;i<m;i++){ // input
            for(int j=0;j<n;j++){
                    cin>>arr[i][j];
            }
        }
        for(int i=0;i<m;i++){ // output
            for(int j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
}


