//DSA02016
#include <bits/stdc++.h>
using namespace std;
vector<bool> aa, bb, cc;
int check;
void phong(int h, int n)
{
    if (h > n)
    {
        check++;
        return;
    }
    for (int i = 1; i <= n; i++)
        if (cc[i] == 0 && aa[i + h - 1] == 0 && bb[i - h + n] == 0 )
        {
            cc[i] = 1;
            bb[i - h + n] = 1;
            aa[i + h - 1] = 1;
            phong(h + 1, n);
            cc[i] = 0;
            bb[i - h + n] = 0;
            aa[i + h - 1] = 0;
        }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        bb.clear();
        bb.resize(n * 2, 0);
        aa.clear();
        aa.resize(n * 2, 0);
        cc.clear();
        cc.resize(n + 1, 0);
        check = 0;
        phong(1, n);
        cout << check << endl;
    }
}