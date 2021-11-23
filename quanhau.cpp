#include <bits/stdc++.h>
using namespace std;
int X[11], A[11], XUOI[20], NGUOC[20];
int dem, n;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (A[j] && XUOI[i - j + n] && NGUOC[i + j - 1])
        {
            X[i] = j;
            A[j] = 0;
            XUOI[i - j + n] = 0;
            NGUOC[i + j - 1] = 0;
            if (i == n)
            {
                dem++;
            }

            else
                Try(i + 1);
            XUOI[i - j + n] = 1;
            NGUOC[i + j - 1] = 1;
            A[j] = 1;
        }
    }
}
int main()
{
    int n, m, T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        dem=0;
        for (int j = 1; j < 20; j++)
        {
            if (j < 11)
            {
                A[j] = 1;
            }

            XUOI[j] = 1;
            NGUOC[j] = 1;
        }
        Try(1);
        cout<<dem;
    }
}