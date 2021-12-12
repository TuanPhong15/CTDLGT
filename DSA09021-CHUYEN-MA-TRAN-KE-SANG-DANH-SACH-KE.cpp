//DSA09021
#include <bits/stdc++.h>

using namespace std;


int main()
{
    
        int n;
        cin >> n;
        vector<vector<int>> x(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                int num;
                cin >> num;
                if (num)
                    x[i].push_back(j + 1);
            }
        for (int i = 0; i < n; i++)
        {
            for (int j : x[i])
                cout << j << ' ';
            cout << endl;
        }
    
}