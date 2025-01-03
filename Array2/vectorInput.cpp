#include<iostream>
#include<vector> //for vector
using namespace std;
int main(){
    //having size

    // vector<int>v(5);
    // for(int i=0;i<5;i++){
    //     cin>>v[i];
    // }
    //   for(int i=0;i<5;i++){
    //     cout<<v[i];
    // }

    //having size

        vector<int>v;
        cout<<"Enter the elements in array";
    for(int i=0;i<5;i++){ //i!<size() because initial size of array is 0
        int x;
        cin>>x;
        v.push_back(x);
    }
      for(int i=0;i<5;i++){
         cout<<v[i];
     }
} 