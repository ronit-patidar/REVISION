#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<=n-1;i++){
        product=product*arr[i];
    }
    cout<<product<<endl;
}

