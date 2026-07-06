#include <bits/stdc++.h>
using namespace std;

//backtraverse and check is there any bigger number and keep storing that number whennever it get update

class Solution {
public:
    vector<int> leaders(vector<int>& nums) { //TC > O(N)  SC > O(N)
      int maxi = INT_MIN;
      int n = nums.size();
      vector<int> ans;
      for(int i=n-1;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi,nums[i]);
      }
      sort(ans.begin(),ans.end(),greater <int>());
      return ans;
    }
};