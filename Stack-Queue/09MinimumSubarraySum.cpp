#include <bits/stdc++.h>
using namespace std;

//TC >> o(5n)  sc >>(5n)

class Solution {
public:
    vector<int> nextSmallerElements(const vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> nse(n);
        for(int i = n-1; i>=0; i--){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=n;
            } else {
                nse[i]=st.top();
            }
            st.push(i);
        }
        return nse;
    }

    vector<int> prevSmallerElements(const vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> pse(n);
        for(int i=0; i<n; i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            } else {
                pse[i]=st.top();
            }
            st.push(i);
        }
        return pse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9+7;
        long long total = 0;
        vector<int> nse = nextSmallerElements(arr);
        vector<int> pse = prevSmallerElements(arr);
        for(int i=0; i<n; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total = (total + (right * left % mod) * arr[i]) % mod;
        }
        return (int)total;
    }
};