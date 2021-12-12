//DSA06011
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, big = 1e9;
        cin >> n;
        int a[n] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j];
                if (abs(sum) < abs(big))
                    big = sum;
            }
        cout << big << endl;
    }
}