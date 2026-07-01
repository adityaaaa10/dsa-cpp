#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
         int n = nums.size();
         k = k % n;
       reverse(nums.begin(),nums.begin()+k); //O(k)
       reverse(nums.begin()+k,nums.end()); //O(n-k)
       reverse(nums.begin(),nums.end());  //O(n)
    }//total > O(2n)
};