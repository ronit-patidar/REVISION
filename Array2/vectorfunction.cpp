#include<iostream>
#include<vector>
using namespace std;

// vector are not pass by reference 
// vector are pass by value
// for pass by reference add & in function

void change (vector<int>& a){
     a[0]=100;
}


int main(){
    vector<int> v;
    // input
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    //cout before
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    change(v);

   //cout before
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}