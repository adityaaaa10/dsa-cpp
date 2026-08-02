#include <bits/stdc++.h>
using namespace std;

//traversing from both sides and calculating the max height from left and right and then calculating the water trapped at each index
//Two pointer approach
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int Lmax=0,Rmax=0,total=0;
        int l = 0;
        int r = n-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(Lmax>height[l]){
                    total += Lmax - height[l];
                }
                else{
                    Lmax = height[l];
                }
                l++;
            }
                else{
                    if(Rmax>height[r]){
                        total +=Rmax -height[r];
                    }
                    else{
                        Rmax = height[r];
                    }
                    r--;
                }
        }
        return total;
    }
};