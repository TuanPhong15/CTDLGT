//DSA01003
#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
void check()
{
    int pos = (int)vec.size() - 2;
    while (pos >= 0 && vec[pos] >= vec[pos + 1])
        pos--;
    if (pos == -1)
        pos = -1;
    int i = vec.size() - 1;
    if (pos > -1)
    {
        while (vec[i] <= vec[pos])
            i--;
        swap(vec[i], vec[pos]);
    }
    int r = vec.size() - 1, l = pos + 1;
    while (r > l)
    {
        swap(vec[r], vec[l]);
        r--;
        l++;
    }
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        vec.clear();
        vec.resize(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        check();
        for (int i = 0; i < n; i++)
            cout << vec[i] << ' ';
        cout << endl;
    }
    return 0;
}