#include<iostream>
#include<vector> //for vector
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    // output
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // pop element
    v.pop_back();//size change but capacity does not change
    v.pop_back();
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}