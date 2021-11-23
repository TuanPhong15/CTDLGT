//DSA01001
#include <bits/stdc++.h>
using namespace std;
void next(string s)
{
    int l = s.size();
    int i;
    for (i = l - 1; i >= 0; i--)
    {

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
            break;
        }

        else
            s.at(i) = '0';
    }

    // if (i < 0)
    //     s = "1" + s;
    cout << s << endl;
}
int main()
{
    int n, m, T;
    string s;
    cin >> T;
    while (T--)
    {
        cin>>s;
        next(s);
    }
}