//DSA07014
#include <bits/stdc++.h>

using namespace std;
int tinh(string s)
{
    stack<int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
            st.push(s[i] - '0');
        else
        {
            int tmp2 = st.top();
            st.pop();
            int tmp1 = st.top();
            st.pop();
            if (s[i] == '+')
                st.push(tmp2 + tmp1);
            if (s[i] == '-')
                st.push(tmp2 - tmp1);
            if (s[i] == '*')
                st.push(tmp2 * tmp1);
            if (s[i] == '/')
                st.push(tmp2 / tmp1);
        }
    }
    return st.top();
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        cout << tinh(s) << endl;
    }
}