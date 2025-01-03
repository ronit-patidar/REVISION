// leetcode : 75 (sort colour)
// link : https://leetcode.com/problems/sort-colors
// https://youtu.be/tp8JIuCXBaU?feature=shared
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
// sort in 0s 1s 2s
//  dutch national flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) { // O(n),O(1)
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
int main(){
   vector<int> arr={1,2,0,0,1,0,2,2,1,0};
   Solution sol;
   sol.sortColors(arr);
   for(auto ele:arr){
    cout<<ele<<" ";
   }
}
