//DSA5009-TAP-CON-BANG-NHAU
#include <bits/stdc++.h>
using namespace std;
bool pass;
int n;
void check(int a[], int pos, int k, int tong)
{
    if (pass)
        return;
    if (tong > k)
        return;
    if (pos >= n)
    {
        if (tong == k)
            pass = 1;
        return;
    }
    check(a, pos + 1, k, tong + a[pos]);
    check(a, pos + 1, k, tong);
}
void kiem_tra()
{
    int dem = 0;
    cin >> n;
    int a[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        dem += a[i];
    }
    if (dem % 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        check(a, 0, dem / 2, 0);
        if (pass)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        kiem_tra();
}