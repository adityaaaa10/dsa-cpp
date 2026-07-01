#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> arr;
        while(i<n1 && j<n2){
            if(nums1[i]<= nums2[j]){
                if(arr.size()==0 || arr.back()!= nums1[i]){
                    arr.push_back(nums1[i]);
                }
                i++;
            }
            else{
                if(arr.size()==0 || arr.back() != nums2[j]){
                    arr.push_back(nums2[j]);
                }
                j++;
            }

        }
         while(j<n2){
                if(arr.size()==0 || arr.back() != nums2[j]){
                    arr.push_back(nums2[j]);
                }
                j++;
            }
            while(i<n1){
                if(arr.size()==0 || arr.back() != nums1[i]){
                    arr.push_back(nums1[i]);
                }
                i++;
            }

        return arr;
    }  //O(n1+n2)
};