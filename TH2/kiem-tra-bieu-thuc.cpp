#include <bits/stdc++.h>
using namespace std;
string convert(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' && (s[i - 1] == '+' || s[i - 1] == '-'))
        {
            st.push(s[i - 1]);
        }
        if (!st.empty() && st.top() == '-')
        {
            if (s[i] == '-')
            {
                s[i] = '+';
            }
            else if (s[i] == '+')
                s[i] = '-';
        }
        else if (!st.empty() && s[i] == ')')
            st.pop();
    }
    string ans = "";
    for (char val : s)
    {

        if (val != '(' && val != ')')
        {
            ans.push_back(val);
        }
    }
    return ans;
}
int main()
{
    int n, m, T;
    cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (convert(s1) == convert(s2))
        {
            cout << 1 << '\n';
        }
        else
            cout << 0 << '\n';
    }
}