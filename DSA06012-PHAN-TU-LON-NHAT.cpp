//DSA06012
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}