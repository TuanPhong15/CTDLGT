//DSA05029
#include <bits/stdc++.h>

using namespace std;

bool check(char c1, char c2)
{
    int tmp = (c1 - '0') * 10 + (c2 - '0');
    return tmp >= 10 && tmp <= 26;
}
void phong()
{
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    s = '#' + s;
    vector<long long> F(s.length() + 1, 0);
    F[0] = F[1] = 1;
    for (int i = 2; i < s.length(); i++)
    {
        if (s[i] == '0' && check(s[i - 1], s[i]) == 0)
        {
            cout << 0 << endl;
            return;
        }
        if (s[i] != '0')
            F[i] = F[i - 1];
        if (check(s[i - 1], s[i]))
            F[i] += F[i - 2];
    }
    cout << F[s.length() - 1] << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        phong();
}