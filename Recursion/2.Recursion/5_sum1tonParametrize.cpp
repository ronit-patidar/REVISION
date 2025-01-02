#include<iostream>
using namespace std;

// call stack of RECURSION

// sum1toN(0,5)
// sum1toN(5,4)
// sum1toN(9,3)
// sum1toN(12,2)
// sum1toN(14,1)
// sum1toN(15,0) base case hit 

void sum1toN(int sum,int n){
    // base case
    if(n==0){ 
        cout<<sum;
        return;
    }
    sum1toN(sum+n,n-1);
}
int main(){
    sum1toN(0,5);
}