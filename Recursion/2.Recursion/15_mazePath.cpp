#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalWays= rightways+downways;
    return totalWays;
}
void printways(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec) {
        cout<<s<<endl; // destination reached
        return;
    }
    printways(sr,sc+1,er,ec,s+'R');
    printways(sr+1,sc,er,ec,s+'L');
}
int main(){
    cout<<maze(1,1,3,3)<<endl;
    printways(1,1,3,3,"");
}