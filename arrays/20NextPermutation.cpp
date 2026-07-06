#include <bits/stdc++.h>
using namespace std;
//find the arr[i] < arr[i+1];
//find arr[i]>x should be the first biggest and lowest of all biggest
//place the rest array in sorted
class Solution {
public:
    void nextPermutation(vector<int>& nums) { //O(3n)
        int n = nums.size();
        int index = -1;
        for(int i =n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i =n-1;i>=0;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};