#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// method 1
void sort01(vector<int>&v){
    int noz=0;
    int noo=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==0){ noz++;}
        else {noo++;}
    }
    for(int i=0;i<n;i++){
       if(i<noz) { v[i]=0;}
       else {v[i]=1;}
    }
}
// method 2
void sort01m2(vector<int>& v){
int i=0;
int n=v.size();
int j=n-1;
while(i<j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    if(i>j) break;
    if(v[i]==1 && v[j]==0){
       v[i]=0;
       v[j]=1;
       i++;
       j--;
    }
}
}
int main(){
    vector<int>v;
    int n=v.size();
    cout<<"Enter the elements in array ";
    for(int i=0;i<8;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<8;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort01(v);
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
     sort01m2(v);
     for(int i=0;i<8;i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;



}

