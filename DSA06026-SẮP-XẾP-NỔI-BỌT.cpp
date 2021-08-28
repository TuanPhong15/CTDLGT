//DSA06026
#include <bits/stdc++.h>
using namespace std;
int sapxep(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
    {
        bool is_swap = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j + 1] < a[j])
            {
                swap(a[j + 1], a[j]);
                is_swap = true;
            }
        }
        if (is_swap)
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else return 0;
    }
    return 1;
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