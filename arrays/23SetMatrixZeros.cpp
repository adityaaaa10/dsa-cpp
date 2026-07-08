#include <bits/stdc++.h>
using namespace std;

// Brute > mark row and colum of zero containing 1 as -1 and then turn that it itno 0  O(n^3)

// Btter > create a row{m},col{n} od 0 and whenever 0 in matrix make it one after whole is done turn that row and col in 0 . TC> O(n^2) , SC > o(n) ans o(m)

// optimal > no extra space

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int col0 = 1;
        int n = matrix.size();    // rows
        int m = matrix[0].size(); // columns
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                    {
                        matrix[0][j] = 0;
                    }
                    else
                    {
                        col0 = 0;
                    }
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};