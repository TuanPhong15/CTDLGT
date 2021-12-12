//DSA07023
#include <bits/stdc++.h>

using namespace std;

bool isChar(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s, tmp = "";
        stack<string> st;
        getline(cin, s);
        int i = 0;
        while (i < s.length())
        {
            while (i < s.length() && isChar(s[i]))
            {
                tmp = tmp + s[i];
                i++;
            }
            while (i < s.length() && !isChar(s[i]))
                i++;
            if (tmp.length() > 0)
            {
                st.push(tmp);
                tmp = "";
            }
        }
        while (st.size())
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
}