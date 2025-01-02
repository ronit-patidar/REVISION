#include<iostream>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>& v){
     if(original==""){
        v.push_back(ans);
        return;
     }
     char ch=original[0];
     // substr(1) -> means omit first charactor
     storesubset(ans+ch,original.substr(1),v);
     storesubset(ans,original.substr(1),v);
     // interchange both line and see
}
int main(){
    string str="abc";
    vector<string> v;
    storesubset("",str,v);
    for(string ele :v){
        cout<<ele<<endl;
    }
}