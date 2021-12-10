#include<bits/stdc++.h>

#define mp make_pair
#define F first
#define S second
using namespace std;

typedef long long ll;
bool isOP(char c)
{
    switch (c)
        case '+':
        case '-':
        case '/':
        case '*':
            return true;
    return false;
}
string frompretomid(string s)
{
    stack <string> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (isOP(s[i]))
        {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string tmp ="";
            tmp = s2+s[i]+s1;
            st.push(tmp);
        }
        else
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    return st.top();
}
void solve()
{
    string s;
    cin >> s;
    cout <<frompretomid(s) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--) solve();
}