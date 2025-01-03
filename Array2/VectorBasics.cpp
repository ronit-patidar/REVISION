#include<iostream>
#include<vector> //for vector
using namespace std;
int main(){
      vector<int>v; // not need to mention size
    //   v.push_back(); to add element in array
    // v[0] is wrong to add elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<v[0]<<" ";// for accessing and updating
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();
    
}// taking array as stack 
#include<iostream>
using namespace std;
class stack{// user defined data structure
public:
   int arr[5];
    int idx;
   stack(){
        idx=-1;
   }
   void push(int val){
    if(idx==sizeof(arr)/sizeof(arr[0])-1){
        cout<<"Stack is full"<<endl;
        return;
    }
       idx++;
       arr[idx]=val;
   }
   void pop(){
    if(idx==-1) {
        cout<<"Stack is empty"<<endl;
        return;
    }
      idx--;
   }
   int top(){
    if(idx==-1) {
        cout<<"Stack is empty"<<endl;
        return;
    }
     return arr[idx];
   }
   int size(){
       return idx+1;
   }
   void display(stack &st){
      for(int i=0;i<idx+1;i++){
          cout<<arr[i]<<" ";
      }
   }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(5);
    cout<<st.top()<<endl;
    st.display(st);
}