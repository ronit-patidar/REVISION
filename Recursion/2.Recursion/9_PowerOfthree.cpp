// leetcode : 326
// link : https://leetcode.com/problems/power-of-three

#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n==0 || n%3!=0) return false;
        return isPowerOfThree(n/3);
    }
};
int main(){
    int n=81;
    Solution Sol;
    bool ans = Sol.isPowerOfThree(n);
    cout<<ans;

}