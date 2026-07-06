#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) { //TC > o(n)  //SC > O(n)
        int positive = 0;
        int negative =1;
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negative] = nums[i];
                negative += 2;
            }
            else{
                ans[positive] = nums[i];
                positive += 2;
            }
        }
        return ans;
    }
};