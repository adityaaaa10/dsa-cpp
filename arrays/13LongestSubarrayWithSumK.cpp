#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{                      // TC > O(n) //SC > O(1)
    map<int, int> mpp; // Use when array is mix with positvie and negatives
    int len = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            len = max(len, i + 1);
        }
        int rem = sum - k;
        if (mpp.find(rem) != mpp.end())
        {
            int length = i - mpp[rem];
            len = max(len, length);
        }
        if (mpp.find(sum) == mpp.end())
            mpp[sum] = i;
    }
    return len;
}

int longestSubarray2(vector<int> &nums, int k)
{ // TC > O(n)  SC > O(1)
  // only when positive or negatives are there
    int left = 0;
    int right = 0;
    int len = 0;
    int sum = nums[0];
    int n = nums.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= nums[left];
            left++;
        }
        if (sum == k)
        {
            len = max(len, right - left + 1);
        }
        right++;
        if (right < n)
            sum += nums[right];
    }
    return len;
}