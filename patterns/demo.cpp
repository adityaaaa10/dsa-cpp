#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print9(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
             cout << "* ";
        }
        cout << endl;
    }
}
void print11(int n){
    for (int i=1;i<=n;i++){
          for(int j=1;j<=i;j++){
            cout << j << " ";
          }
          for(int j=1;j<=2*(n-i);j++){
            cout << "  ";
          }
          for(int j=i;j>=1;j--){
            cout << j << " ";
          }
          cout << endl;
    }
}
void print12(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout << num << " ";
        num = num + 1;
       }
       cout << endl;
    }
}
void print13(int n){
    char a = 'A';
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
      cout << (char)('A' + j - 1);
       }
       cout << endl;
    }
}
void print14(int n){
    char a = 'A';
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i+1;j++){
      cout << (char)('A' + j - 1);
       }
       cout << endl;
    }
}
void print15(int n){
    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
      cout << (char)('A'+ i);
       }
       cout << endl;
    }
}
void print16(int n){~
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << ch;
            if (j < (i*2+1)/2)ch++;
            else ch--;
           
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print16(n);
    }
}