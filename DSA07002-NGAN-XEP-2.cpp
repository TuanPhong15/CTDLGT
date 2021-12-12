//DSA07002
#include <bits/stdc++.h>

using namespace std;
vector<int> a;
void in()
{
    if (a.size() == 0)
    {
        cout << "empty" << endl;
        return;
    }
    for (int i : a)
        cout << i << ' ';
    cout << endl;
}
void push(int so)
{
    a.push_back(so);
}
void pop()
{
    a.pop_back();
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "in")
            in();
        else if (s == "pop")
            pop();
        else
        {
            int so;
            cin >> so;
            push(so);
        }
    }
}