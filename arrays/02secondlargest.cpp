#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
     int largest = nums[0];
     int seclargest = -1;
     for(int i =0;i<nums.size();i++){
        if(nums[i]>largest){
            largest = nums[i];
            seclargest = largest;
        }
        else if(nums[i]<largest && nums[i]>seclargest){
            seclargest = nums[i];
        }
     }
    return seclargest; 
    }
};