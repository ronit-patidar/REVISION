#include<iostream>
#include<vector> //for vector
using namespace std;
int main(){
    vector<int>v;
    // vector<int>v(5,7)=it means size of array is 5 with each element 7
    v.push_back(1);// 1 1
    v.push_back(2);// 2 2
    v.push_back(3);// 3 4
    v.push_back(4);// 4 4
    v.push_back(5);// 5 8
    v.push_back(6); // 6 8
    v.push_back(7); // 7 8
    v.push_back(8); // 8 8
    v.push_back(1); // 9 16
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);// 22 32
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
   v.pop_back();
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

}