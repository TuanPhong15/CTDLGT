//DSA07010
#include <bits/stdc++.h>
using namespace std;
bool check(char c)
{
    switch (c)
    case '+':
    case '-':
    case '/':
    case '*':
        return 1;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        stack<string> st;
        cin >> s;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (check(s[i]))
            {
                string s1 = st.top();
                st.pop();
                string s2 = st.top();
                st.pop();
                st.push(s1 + s2 + s[i]);
            }
            else
            {
                string tmp = "";
                tmp += s[i];
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    };
}