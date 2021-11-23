// DÃY SỐ 1


#include <bits/stdc++.h>
using namespace std;



void Try(int n,int a[])
{
    int i;
    if (n == 0)
        return;
    cout << "[";
    for (i = 1; i < n; i++)
        cout << a[i] << " ";
    cout << a[n] << "]" << endl;
    for (i = 1; i <= n; i++)
        a[i] = a[i] + a[i + 1];
}

int main()
{
    int T;
    int a[20], n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        while (n)
        {
            Try(n,a);
            n--;
        }
    }
    return 0;
}