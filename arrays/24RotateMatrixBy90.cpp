#include <bits/stdc++.h>
using namespace std;

//brute > arr[i][j]  will be arr[j][n-1-i]  1st row > 4th col , 2nd row > 3rd col and so on with TC > o(n^2 ) SC > o(n^2) due to extra arr

//optimal > by doing transpose ie turning row into col and then reverse every row so no extra space

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();       // rows
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
