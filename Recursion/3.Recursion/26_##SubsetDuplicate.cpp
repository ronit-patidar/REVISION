#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
// duplicate element in string 
// duplicate element in array (leetcode 90)
void storesubset(string ans,string original,vector<string>& v,bool flag){
     if(original==""){
        v.push_back(ans);
        return;
     }
     char ch=original[0];
     if(original.length()==1){
        storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,true);
        return ; // taaki neeche ki do conditions na chale
     }
     char dh=original[1];
     if(ch==dh){ // duplicates
        if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,false);
     }
     else{ // no duplicated
        if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
        storesubset(ans,original.substr(1),v,true);
     }
}
int main(){
    string str="aba"; // str contain duplicates
    sort(str.begin(),str.end());
    vector<string> v;
    storesubset("",str,v,true);
    for(string ele :v){
        cout<<ele<<endl;
    }
}