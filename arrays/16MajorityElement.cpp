#include <bits/stdc++.h>
using namespace std;

//Moores's voting algo

class Solution {
public:
    int majorityElement(vector<int>& nums) { //TC > O(2n)
        int cnt =0;
        int el;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnt = 1;
                 el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) cnt2++;
        }
        if(cnt2 > n/2){
            return el;
        } 
        return -1;
    }
};