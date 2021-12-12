//DSA08019
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int lim;
        vector<string> ans;
        cin >> lim;
        for (int n = 1; n <= lim; n++)
        {
            int a = 1;
            for (int i = 0; i < n ; i++)
                a <<= 1;
            for (int i = 0; i < a; i++)
            {
                int thu = a >> 1;
                string res = "";
                for (int j = 0; j < n; j++)
                {
                    if (i & thu)
                        res = res + '8';
                    else
                        res = res + '6';
                    thu >>= 1;
                }
                ans.push_back(res);
            }
        }
        cout << ans.size() << endl;
        for (int i = ans.size()-1; i >=0; i--)
        {
            cout<<ans[i]<<' ';
        }
        
        cout << endl;
    }
}