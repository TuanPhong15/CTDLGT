//DSA03010
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        priority_queue<long long, vector<long long>, greater<long long>> q;
        long long tmp = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long num;
            cin >> num;
            q.push(num);
        }
        while (q.size() > 1)
        {
            long long tmp1 = q.top();
            q.pop();
            long long tmp2 = q.top();
            q.pop();
            tmp += tmp1 + tmp2;
            q.push(tmp1 + tmp2);
        }
        cout << tmp << endl;
    }
}