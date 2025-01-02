 #include<iostream>
using namespace std;
void number(int n){
    if(n==0) return ;  // base case
    number(n-1); // call
    cout<<n<<" "; // kaam

}
int main(){ 
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    number(n);
}