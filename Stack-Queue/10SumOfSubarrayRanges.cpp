#include <bits/stdc++.h>
using namespace std;

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
long long sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long total = 0;
        vector<int> nse = nextSmallerElements(arr);
        vector<int> pse = prevSmallerElements(arr);
        for(int i=0; i<n; i++){
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total = total + (right * left * arr[i]);
        }
        return total;
    }

    vector<int> nextGreaterElements(const vector<int>& arr){
    int n = arr.size();
    stack<int> st;
    vector<int> nge(n);
    for(int i = n-1; i>=0; i--){
        while(!st.empty() && arr[st.top()] < arr[i]){  
            st.pop();
        }
        if(st.empty()){
            nge[i]=n;
        } else {
            nge[i]=st.top();
        }
        st.push(i);
    }
    return nge;
}

vector<int> prevGreaterElements(const vector<int>& arr){
    int n = arr.size();
    stack<int> st;
    vector<int> pge(n);
    for(int i=0; i<n; i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){   
            st.pop();
        }
        if(st.empty()){
            pge[i]=-1;
        } else {
            pge[i]=st.top();
        }
        st.push(i);
    }
    return pge;
}

long long sumSubarrayMax(vector<int>& arr) {
    int n = arr.size();
    long long total = 0;
    vector<int> nge = nextGreaterElements(arr);
    vector<int> pge = prevGreaterElements(arr);
    for(int i=0; i<n; i++){
        long long left = i - pge[i];
        long long right = nge[i] - i;
        total = total + (right * left * arr[i]);
    }
    return total;
}
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMax(nums) - sumSubarrayMins(nums);
    }
};