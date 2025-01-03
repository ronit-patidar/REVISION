#include<iostream>
using namespace std;
int main(){
    int m=4;
    int n=4;
    int arr[m][n]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
    int l1=1;
    int r1=2;
    int l2=3;
    int r2=3;
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum of rectangle of coordinates is : "<<sum<<endl;
}