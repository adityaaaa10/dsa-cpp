#include <bits/stdc++.h>
using namespace std;
//tc >> o(1) sc>> o(n)
class MinStack {
public:
stack<long long> s;
    long long mn;

    MinStack() {
        
    }
    
    void push(int value) {
        if (s.empty()) {
            mn = value;
            s.push(value);
        } else {
            if (value > mn) {
                s.push(value);
            } else {
                s.push(2LL * value - mn);   // now long long arithmetic
                mn = value;
            }
        }      
    }
    
    void pop() {
        if (s.empty()) return;
        long long x = s.top();
        s.pop();
        if (x < mn) {
            mn = 2 * mn - x;
        }
    }
    
    int top() {
        long long x = s.top();
        if (x < mn) return (int)mn;
        return (int)x;
    }
    
    int getMin() {
        return (int)mn;
    }
};
