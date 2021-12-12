//DSA01019
#include <bits/stdc++.h>

using namespace std;

vector<string> res;
int n;
void sinh(int spt, string s)
{
    if (spt > n)
    {
        res.push_back(s);
        return;
    }
    for (char i = '0'; i <= '1'; i++)
    {
        sinh(spt + 1, s + i);
    }
}
bool check(string s)
{
    if (s[0] == '0')
        return 0; //0 = A, 1 = H
    if (s[s.length() - 1] == '1')
        return 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1] && s[i] == '1')
            return 0;
    }
    return 1;
}
string doi(string s)
{
    string tmp = "";
    for (char i : s)
        if (i == '0')
            tmp = tmp + 'A';
        else
            tmp = tmp + 'H';
    return tmp;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        res.clear();
        sinh(1, "");
        for (string i : res)
        {
            if (check(i))
                cout << doi(i) << endl;
        }
    }
}