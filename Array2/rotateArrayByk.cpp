#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
}
        return;
}
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
       vector<int> v;
       v.push_back(1);
       v.push_back(6);
       v.push_back(2);
       v.push_back(3);
       v.push_back(7);
       v.push_back(4);
       v.push_back(8);
       display(v);
       // k=n array is same
        int k=9;
        int n=v.size();
        if(k>n) k=k%n;
        reversepart(0,n-k-1,v);
        reversepart(n-k,n-1,v);
        reversepart(0,n-1,v);
        display(v);
        }
       


    
  
    

     
    