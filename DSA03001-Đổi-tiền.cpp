//DSA03001
#include <bits/stdc++.h>
using namespace std;

int coin[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n = 10;

void doi_tien(int N)
{

    int ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        while (N >= coin[i])
        {
            N -= coin[i];
            ans++;
        }
    }
    cout << ans << endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, T;
    cin >> T;
    while (T--)
    {
        cin>>n;
        doi_tien(n);
    }
}
