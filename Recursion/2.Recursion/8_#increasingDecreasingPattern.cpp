#include<iostream>
using namespace std;
// M 1
// 1 2 3 4 3 2 1 
void patternInOnePass(int x,int n){
    if(x>=n){
        cout<<x<<" ";
        return ;
    }
    cout<<x<<" ";
    patternInOnePass(x+1,n);
    cout<<x<<" ";
}
// M 2 
// 1 2 3 4 3 2 1 
void pattern1(int n){
    if(n<=0) return ;
    cout<<n<<" ";
    return pattern1(n-1);
}
void pattern(int n,int i){
    if(i==n) {
        pattern1(n); 
        return ;
    }
    cout<<i<<" ";
    return pattern(n,i+1);
}
// Q2 : 4 3 2 1 2 3 4
void pattern2(int n){
    if(n<=1){
        cout<<n<<" ";
        return ;
    }
    cout<<n<<" ";
    pattern2(n-1);
    cout<<n<<" ";
}
int main(){
    int n=4;
    // Q1
    pattern(n,1); 
    cout<<endl;
    // patternInOnePass(1,n);
    // cout<<endl;
    // Q2 
    // pattern2(n);
    return 0;
}