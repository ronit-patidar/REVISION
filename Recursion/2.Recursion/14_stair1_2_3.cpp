#include<iostream>
using namespace std;
// he can take one two or three step

int staircase(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    if(n==1 ) return 1;
    else return staircase(n-1)+staircase(n-2)+staircase(n-3);
}
int main(){
    cout<<staircase(5);
}