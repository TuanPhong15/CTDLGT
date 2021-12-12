//DSA08003
#include <bits/stdc++.h>

using namespace std;
deque<int> q;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i++; i < n)
    {
        string s;
        cin >> s;
        if (s == "PUSHBACK")
        {
            int so;
            cin >> so;
            q.push_back(so);
        }
        else if (s == "PUSHFRONT")
        {
            int so;
            cin >> so;
            q.push_front(so);
        }
        else if (s == "POPFRONT")
        {
            if (!q.empty())
                q.pop_front();
        }
        else if (s == "POPBACK")
        {
            if (!q.empty())
                q.pop_back();
        }
        else
        {
            if (s == "PRINTFRONT")
            {
                if (q.empty())
                    cout << "NONE" << endl;
                else
                    cout << q.front() << endl;
            }
            else if (q.empty())
                cout << "NONE" << endl;
            else
                cout << q.back() << endl;
        }
    }
}