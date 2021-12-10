//DSA1007
#include <bits/stdc++.h>

using namespace std;
void create(int check, string s, int n)
{
    if (check > n)
    {
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '0')
                cout << 'A';
            else
                cout << 'B';
        cout << ' ';
        return;
    }
    for (char i = '0'; i <= '1'; i++)
        create(check + 1, s + i, n);
}
int main()
{
    vector<int> vec;
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)

    {
        int n;
        vec.resize(0);
        cin >> n;
        create(1, "", n);
        cout << endl;
    }
}