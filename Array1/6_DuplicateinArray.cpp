#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,-3,2,-5,3,6,7};
    int n = sizeof(arr)/4;
    bool flag = false; //false =no duplicate
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true) cout<<"duplicates";
    else cout<<"unique";
    }