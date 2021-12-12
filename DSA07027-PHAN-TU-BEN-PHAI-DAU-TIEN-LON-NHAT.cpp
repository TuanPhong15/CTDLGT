//DSA07027
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        stack<int> st;
        vector<int> a(n + 1), res(n, n);
        a[n] = -1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        st.push(0);
        for (int i = 1; i < n; i++)
        {
            while (!st.empty() && a[i] > a[st.top()])
            {
                res[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for (int i : res)
            cout << a[i] << ' ';
        cout << endl;
    }
}