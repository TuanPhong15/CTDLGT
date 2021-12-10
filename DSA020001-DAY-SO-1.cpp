//dsa020001
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> vec;
void check()
{
    cin >> n;
    vec.resize(n);
    int low = 1e9;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        low = min(low, vec[i]);
    }
    int res = 0;
    bool ok = 1;
    for (int i = low; i >= 1; i--)
    {
        ok = 1;
        for (int j = 0; j < vec.size(); j++)
        {
            int b = vec[j] / i;
            if (vec[j] / b == i)
            {
                while (b != 0 && vec[j] / b == i)
                {
                    b--;
                }
                res += (b + 1);
            }
            else
            {
                ok = 0;
                res = 0;
                break;
            }
        }
        if (ok == 1)
            break;
    }
    cout << res;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        check();
}