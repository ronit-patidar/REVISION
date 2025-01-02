// aRaisedToPowerBusingRecursion
#include<iostream>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
// O(2*n)  -> ek baaar  call jane ka and wapass ane kaa 
// O(n) -> due to recursive callstack of recursion 
// creates frame every time for formal parameter , (a,b) in code

int powerRec(int a,int b){ // O(b) , O(1)
    // formula ->  a^b = a * a^(b-1) 
    // power(a,b) -> a * power(a,b-1)
    if(b==0) return 1;  
    return a*powerRec(a,b-1);
}
// logirithmic time complexity
// dry run when revise ex ; 2^5
int pow(int x,int n){ // O(log2 n) O(log2 n)
    if(n==1) return x ;
    int ans = pow(x,n/2);
    // return  pow(x,n/2)* pow(x,n/2); why two calls store it variable and double it .
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}
int main(){
    cout<<"Recursive Solution : "<<powerRec(2,5)<<endl;
    cout<<"Inbuilt function   : "<<pow(2,5)<<endl;
    cout<<"Optimized Solution : "<<pow(2,5)<<endl;
}