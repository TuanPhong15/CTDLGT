//DSA08002
#include <bits/stdc++.h>
using namespace std;
queue<int> q;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int so;
            cin >> so;
            q.push(so);
        }
        else if (s == "POP")
        {
            if (!q.empty())
                q.pop();
        }
        else
        {
            if (q.empty())
                cout << "NONE" << endl;
            else
                cout << q.front() << endl;
        }
    }
}