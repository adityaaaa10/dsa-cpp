#include <bits/stdc++.h>
using namespace std;

// dutch flag method
class Solution
{ // TC . O(N)   //SC . O(1)
  // 0 to low -1 > 0
  //  low to mid -1 > 1
  // mid to high > array which is to be sorted
  //  high+1 to n-1 > 2
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};