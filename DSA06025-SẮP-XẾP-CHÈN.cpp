//DSA06025
#include <bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
            vector<int> b;

    for (int i = 0; i < n; i++)
    {
        cout << "Buoc " << i << ": ";
        int count =i;
        b.push_back(a[i]);
        sort(b.begin(),b.end());
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, m, T;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sapxep(n, a);
}