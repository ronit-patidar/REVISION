// sum of odd number between two number 
#include<iostream>
using namespace std;
int oddsum(int a,int b){
    int sum=0;
    for(int i=a+1;i<b;i+=2){
        sum += i;
    }
    return sum;
}
void sumOfOdd(int a,int b,int sum){
    // base case 
    if(b<=a) {
        cout<<sum;
        return ;
    }
    // kaam 
    if(b%2!=0) sum += b;
    // call
    return sumOfOdd(a,b-2,sum);
}
int main(){
    int a=10;
    int b=20;
    int sum=0;
    cout<<oddsum(a,b)<<endl;     //  itrative
    if(b%2==0) b--;
    sumOfOdd(a,b,sum);  //  Recursive
    cout<<endl<<11+13+15+17+19; // check
}