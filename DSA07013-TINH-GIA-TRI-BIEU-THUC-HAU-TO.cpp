//DSA07013
#include <bits/stdc++.h>

using namespace std;
int cal(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            st.push(s[i] - '0');
        else
        {
            int tmp1 = st.top();
            st.pop();
            int tmp2 = st.top();
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
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        cout << cal(s) << endl;
    }
}