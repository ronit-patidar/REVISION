#include<iostream>
using namespace std;
// he can take one or two step

int staircase(int n){
    if(n==1 || n==0) return 1;
    else return staircase(n-1)+staircase(n-2);
}
int main(){
    cout<<staircase(4);
}