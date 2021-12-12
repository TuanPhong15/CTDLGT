#include <bits/stdc++.h>
using namespace std;

int degree(char c)
{
    if (c == '^')
        return 500;
    if (c == '*' || c == '/')
        return 400;
    if (c == '+' || c == '-')
        return 300;
    return 200;
}
string xuli(string s)
{
    string res = "";
    stack<char> x;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            res += s[i];
        else if (s[i] == '(')
            x.push(s[i]);
        else if (s[i] == ')')
        {
            while (x.size() && x.top() != '(')
            {
                res += x.top();
                x.pop();
            }
            x.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
        {
            if (res[res.size() - 1] >= '0' && res[res.size() - 1] <= '9')
                res += '#';
            while (x.size() && degree(x.top()) >= degree(s[i]))
            {
                res += x.top();
                x.pop();
            }
            x.push(s[i]);
        }
    }
    while (x.size())
    {
        if (x.top() != '(')
            res += x.top();
        x.pop();
    }
    return res;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        s = xuli(s);
        stack<long long> x;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                long long a = x.top();
                x.pop();
                long long b = x.top();
                x.pop();
                long long tmp;
                if (s[i] == '+')
                    tmp = b + a;
                else if (s[i] == '-')
                    tmp = b - a;
                else if (s[i] == '*')
                    tmp = b * a;
                else if (s[i] == '/')
                    tmp = b / a;
                else if (s[i] == '%')
                    tmp = b % a;
                else if (s[i] == '^')
                {
                    tmp = b;
                    for (int i = 0; i < a - 1; i++)
                        tmp *= b;
                }
                x.push(tmp);
            }
            else
            {
                long long tmp = 0;
                while (i < s.size() && s[i] >= '0' && s[i] <= '9')
                {
                    tmp = 10 * tmp + (int)(s[i] - '0');
                    i++;
                }
                if (s[i] != '#')
                    i--;
                x.push(tmp);
            }
        }
        cout << x.top() << '\n';
    }
}