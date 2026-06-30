#include <bits/stdc++.h>
using namespace std;

int countDigit(int n)
{ // counting digits
    int cnt = 0;
    while (n > 0)
    {
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}
int reverseNumber(int n)
{ // reversing the number
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }
    return rev;
}

bool isPalindrome(int n)
{ // palindrome check
    int rev = 0;
    int dup = n;
    while (n != 0)
    {
        int ld = n % 10;
        n = n / 10;
        rev = (rev * 10) + ld;
    }
    if (rev < 0)
        return false;
    if (rev == dup)
        return true;
    return false;
}

bool isArmstrong(int n)
{ // Input: n = 153
    // Output: true
    // Explanation: Number of digits : 3.
    // 13 + 53 + 33 = 1 + 125 + 27 = 153.
    // Therefore, it is an Armstrong number.
    int dup = n;
    int sum = 0;
    while (n != 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == dup)
        return true;
    return false;
}

vector<int> divisors(int n)
{
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            result.push_back(i);
        }
    }
    return result;
}

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 2)
        return true;
    return false;
}