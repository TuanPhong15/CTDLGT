#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> temp(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
            sum += temp[i];
        }
        if (sum % 2 != 0)
        {
            cout << 0;
        }
        else
        {
            int tong = sum / 2;
            int res[tong + 1];
            memset(res, 0, sum+1);
            res[0] = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = tong; j >= temp[i]; j--)
                {
                    if (res[j - temp[i]] == 1)
                        res[j] = 1;
                }
            }

            cout << res[tong];
        }
        cout << endl;
    }
}