#include<iostream>
using namespace std;
int main(){
    int m=3;
    int n=4;
    int arr[m][n]={{1,3,5,7}
                  ,{3,4,7,8} 
                  ,{1,4,12,3}
                };
    int idx=0;
    int sum=0;
    int maxsum=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        if(sum>=maxsum) {
            idx=i;
            maxsum=sum;
        }
    }
    cout<<"Maxsum : "<<maxsum<<endl<<"Row with maxsum : "<<idx<<endl;
}