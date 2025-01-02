#include<iostream>
using namespace std;
void number(int n){
    if(n==0) return ;  // base case
    cout<<n<<" ";    // kaam
    number(n-1);     // call
}
void number1(int n){
    if(n==0) return ;  // base case
    number1(n-1);     // call
    cout<<n<<" ";    // kaam
}
int main(){ 
    number(4);
    cout<<endl;
    number1(4);
}