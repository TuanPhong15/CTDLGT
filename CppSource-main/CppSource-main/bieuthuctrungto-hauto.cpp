#include<bits/stdc++.h>
#define FORT(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define F first
#define S second

using namespace std;
string OP="+-*/^";
int tinh(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--)
    {
        if (s[i]>='0'&&s[i]<='9') st.push(s[i]-'0');
        else
        {
            int tmp2=st.top();
            st.pop();
            int tmp1=st.top();
            st.pop();
            if (s[i]=='+') st.push(tmp2+tmp1);
            if (s[i]=='-') st.push(tmp2-tmp1);
            if (s[i]=='*') st.push(tmp2*tmp1);
            if (s[i]=='/') st.push(tmp2/tmp1);
        }
    }
    return st.top();
}
bool Op(char c)
{
    for(int i=0;i<OP.length();i++)
        if (OP[i]==c) return 1;
    return 0;
}
int Deg(char c)
{
    switch (c)
    {
        case '^':
            return 50;
        case '*':
        case '/':
            return 100;
        case '+':
        case '-':
            return 200;
        default:
            return 1000;
    }
}
string toPost(string s)
{
    string res="";
    stack<char> st;
    st.push('#');
    for(int i=0;i<s.length();i++)
    {
        if (s[i]=='(')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i]==')')
        {
            while (st.top()!='(')
            {
                res=res+st.top();
                st.pop();
            }
            st.pop();
            continue;
        }
        if (s[i]!='('&&s[i]!=')'&&(!Op(s[i])))
        {
            res=res+s[i];
            continue;
        }
        if (Op(s[i]))
        {
            while (Deg(st.top())<=Deg(s[i]))
            {
                res=res+st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }
    }
    while (st.top()!='#')
    {
        res=res+st.top();
        st.pop();
    }
    return res;
}
void solve()
{
    string s;
    cin>>s;
    cout<<toPost(s)<<endl;
}
int main()
{
    int T=1;
    cin>>T;
    FORT(t,0,T) solve();
    return 0;
}