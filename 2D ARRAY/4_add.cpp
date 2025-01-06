#include<iostream>
using namespace std;
int main(){
    // for addition size should be same
    // 
    int arr[3][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12}};
    int brr[3][4]={{1,2,3,4}
                  ,{5,6,7,8},
                  {9,10,11,12}};
    int crr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
} 