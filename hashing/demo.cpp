#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> result;
        for(auto it: mpp){
             result.push_back({it.first,it.second});
        }
        return result;
    }

 int mostFrequentElement(vector<int>& nums) {
       unordered_map<int,int> mpp;
       for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
       }
       int maxfreq=0;
       int maxelement=-1;
       for(auto it:mpp){
         if(it.second>maxfreq){
            maxfreq = it.second;
            maxelement = it.first;
         }
         else if(it.second == maxfreq && it.first<maxelement){
            maxelement=it.first;
         }
        }
           return maxelement; 
    }