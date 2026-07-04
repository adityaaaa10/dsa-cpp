#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{ // TC > O(nlogn) SC > O(n)
    unordered_map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int a = nums[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1, -1};
}

// return yes or no without use of hashmap so SC > o(1)

string read(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target)
            return "YES";
        else if (sum > target)
            right--; // sum too big, shrink from the right (largest side)
        else
            left++; // sum too small, grow from the left (smallest side)
    }
    return "NO";
}