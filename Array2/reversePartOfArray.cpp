#include<iostream>
#include<vector>
using namespace std;
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

       display(v);
       //using while loop 
    //    int i=0;
    //    int j=v.size()-1;
        //  while(i<=j){
        // //swap
        // int temp = v[i];
        // v[i]=v[j];
        // v[j]=temp;
        // i++;
        // j--;
// using for while
        int s,e;
        cout<<"Enter the starting index ";
        cin>>s;
        cout<<"Enter the ending index";
        cin>>e;
        for(int i=s, j=e;i<=j;i++,j--){
              int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        }
        display(v);
       }
       


    
  
    

     
    