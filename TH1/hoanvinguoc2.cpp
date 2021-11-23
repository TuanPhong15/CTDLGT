#include <bits/stdc++.h>

using namespace std;

int n,a[20];
bool check[20] = {0};
vector<string> res;
void in()
{
    string s = "";

    for (int i = 1; i <= n; i++)
    {
        s += a[i] + '0';
    }
    res.push_back(s);
}

void Try(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            a[k] = i;
            check[i] = 1;
            if (k == n)
                in();
            else
                Try(k + 1);
            check[i] = 0;
        }
    }
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        cin >> n;
        Try(1);
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i];
            if (i != 0)
                cout << ",";
        }
        res.clear();
        cout << endl;
    }
}