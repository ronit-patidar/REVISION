#include<iostream>
using namespace std;
int main(){
    int m=5;
    int n=5;
    int arr[m][n]={{1,3,5,7,1},
                   {3,4,7,8,1}, 
                   {1,4,12,3,1},
                   {1,2,3,4,5},
                   {6,7,8,9,10}
                };
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}