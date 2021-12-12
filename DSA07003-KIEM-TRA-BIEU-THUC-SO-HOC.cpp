//DSA07003
#include<bits/stdc++.h>


using namespace std;

void check()
{
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if (!(s[i] >= 'a' && s[i] <= 'z') && s[i] != ')') st.push(s[i]);
        if (s[i]== ')')
        {
            if (st.top() == '(')
            {
                cout << "Yes" << endl;
                return;
            }
            while (st.size() && st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << "No" <<endl;
}
int main()
{
    int T;
    cin>>T;
    while (T--) check();
}