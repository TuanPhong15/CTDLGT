//DSA06024
#include <bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << i + 1 << ": ";
        int count =i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[count])
            {
                count=j;
            }
        }
        swap(a[i],a[count]);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
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