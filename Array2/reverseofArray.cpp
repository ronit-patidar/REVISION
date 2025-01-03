// code by me
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int>v1;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }
    cout<<"original array ";
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"reverse array ";
      for(int i=v1[n-2];i>=0;i--){
        cout<<v1[i]<<" ";
    }
  
    
}
     
    