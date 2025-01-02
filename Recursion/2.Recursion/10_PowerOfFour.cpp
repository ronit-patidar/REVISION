// leetcode : 326
// link : https://leetcode.com/problems/power-of-four

#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n==0 || n%4!=0) return false;
        return isPowerOfFour(n/4);
    }
};int main(){
    int n=16;
    Solution Sol;
    bool ans = Sol.isPowerOfFour(n);
    cout<<ans;

}