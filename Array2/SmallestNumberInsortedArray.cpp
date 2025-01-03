#include<iostream>
using namespace std;
// 0 1 2 3 4 5 indexing
// 1 2 3 4 5 6 elements
// sorted = sequence
// positive sorted 1 2 3 4 5 
int main(){
 int arr[] = {-5,-4,-3,1,2,3,4,9} ; 
 int n = sizeof(arr)/4;
 bool flag = false;
 int x=1;
 for(int i=0;i<n;i++){
   //  if(arr[i] != i+1 ){
   //  flag = true;
   //  cout<<"Missing number"<<i+1;
   //  break;
   if(arr[i]<0) continue;
   if(x!=arr[i]) {
      cout<<x;
      flag=true;
      break;
   }
   else x++;
     }
  if(flag==false){
     cout<<"There is not missing number ";
}
}
