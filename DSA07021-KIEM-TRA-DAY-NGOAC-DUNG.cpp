//DSA07021
#include <bits/stdc++.h>
using namespace std;
void check()
{
    string s;
    cin >> s;
    stack<pair<char, int>> st;
    int res = 0;
    vector<int> vec(s.length(), 0);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')' && !st.empty() && st.top().first == '(')
        {
            vec[i] = vec[i - 1];
            if (st.top().second != 0)
                vec[i] += vec[st.top().second - 1];
            vec[i] += 2;
            st.pop();
        }
        else
            st.push(make_pair(s[i], i));
    }
    for (int i = 0; i < s.length(); i++)
        res = max(res, vec[i]);
    cout << res << endl;
}
int main()
{
    int T = 1;
    cin >> T;
    for (int i = 0; i < T; i++)
        check();
}