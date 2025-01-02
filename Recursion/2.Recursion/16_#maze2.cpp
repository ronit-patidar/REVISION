#include<iostream>
using namespace std;
// think reversely 
int maze2(int row,int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int totalWays = rightways+downways;
    return totalWays;
}
// print path using two parameter
void printWays(int row,int col,string s){
    if(row<1 || col<1) return ;
    if(row==1 && col==1) {
       cout<<s<<endl;
    }
    printWays(row,col-1,s+'L'); // LEFT
    printWays(row-1,col,s+'U'); //  UP
}
int main(){
    cout<<maze2(2,2)<<endl;
    printWays(2,2,"");
}