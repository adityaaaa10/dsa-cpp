#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool isSorted(vector<int>& nums){
			for(int i=0;i<nums.size();i++){
                if(nums[i]>=nums[i-1]){

                }
                else {
                    return false;
                }
            }
            return true;
		}
};