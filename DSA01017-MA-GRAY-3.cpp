//DSA01017
#include <bits/stdc++.h>

using namespace std;
vector<vector<string>> grayCode3(15);
void init()
{
    grayCode3[1].push_back("0");
    grayCode3[1].push_back("1");
    for (int i = 2; i <= 10; i++)
    {
        for (int j = 0; j < grayCode3[i - 1].size(); j++)
        {
            grayCode3[i].push_back('0' + grayCode3[i - 1][j]);
        }
        for (int j = grayCode3[i - 1].size() - 1; j >= 0; j--)
        {
            grayCode3[i].push_back('1' + grayCode3[i - 1][j]);
        }
    }
}
int main()
{
    init();
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int vt = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
                vt = vt + (1 << (s.length() - i - 1));
        }
        cout << grayCode3[s.length()][vt] << endl;
    }
}