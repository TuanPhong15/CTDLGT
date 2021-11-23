#include <bits/stdc++.h>
using namespace std;
int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int n = 10;
int greedy(int value, int ans[], int n)
{
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        ans[i] = 0;
        while (value >= coins[i])
        {
            value -= coins[i];
            ans[i]++;
        }
        sum += ans[i];
    }
    return sum;
}
int main()
{
    int T;
    cin >> T;
    int value;
    while (T--)
    {
        int ans[10];

        cin >> value;
        cout << greedy(value, ans, n) << endl;
    }
}