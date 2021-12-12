//DSA08008
#include <bits/stdc++.h>

using namespace std;
bool chia(string u, int n)
{
    long long tmp = 0;
    for (char i : u)
    {
        tmp = tmp * 10 + (i - '0');
        tmp %= n;
    }
    return (tmp == 0);
}
void tim(long long n)
{
    queue<string> q;
    q.push("1");
    while (!q.empty())
    {
        string u = q.front();
        q.pop();
        if (chia(u, n))
        {
            cout << u << endl;
            return;
        }
        q.push(u + "0");
        q.push(u + "1");
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        tim(n);
    };
}