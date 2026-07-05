#include <bits/stdc++.h>
using namespace std;
 //kadane's algo

 class Solution {
public:
    int maxSubArray(vector<int>& nums) {//O(n) only finding the maximum sum
        int maxi = INT_MIN;
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};

class Solution {
public:
     pair<int,int> maxSubArrayIndices(vector<int>& nums) { //Returns subarray
        int maxi = INT_MIN;
        int sum =0;
        int ansStart , ansEnd,start;
        for(int i=0;i<nums.size();i++){
            if(sum==0) start = i;
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
                ansStart = start;
                ansEnd =i;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return {ansStart,ansEnd};
    }
};