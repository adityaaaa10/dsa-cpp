#include <bits/stdc++.h>
using namespace std;
     int cnt = 1;
    void printNumbers(int n) { //1 to n
        if(cnt > n) return;
        cout << cnt << endl;
        cnt ++;
        printNumbers(n);
    }
    void printoppno(int i,int n){ //parametrized
        if(i<1) return;    // n to 1
        cout << i << endl;
        printoppno(i-1,n);
    }
    void printno(int i,int n){ //functional
        if(i<1) return;        // 1 to n
        printno(i-1,n);
        cout << i << endl;
    }
    void printopp(int i,int n){ //functional
        if(i>n) return;        // n to 1
        printopp(i+1,n);
        cout << i << endl;
    }
    void addsum(int n,int i){ //n=num i=sum 
        if(n<1){              //parametrized
            cout << i;       //sum of n
            return;
        }
        addsum(n-1,n+i);
    }
    int sum(int n){  //functional
        if(n==0) return 0;  //sum of n
        return n + sum(n-1);

    }
    int fact(int n){  //functional
        if(n==0) return 1;  //factorial
        return n * fact(n-1);

    }
int main(){

int n;
cin >> n;
printNumbers(n);
cout << endl;
printoppno(n,n);
cout << endl;
printno(n,n);
cout << endl;
printopp(1,n);
cout << endl;
int a;
cin >> a;
addsum(a,0);
cout << endl;
int b;
cin >> b;
cout << sum(b);
cout << endl;
cout << fact(b);
    return 0;
}