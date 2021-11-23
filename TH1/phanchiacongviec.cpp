#include <bits/stdc++.h>
using namespace std;
long long T, N, m, k, s, V;

int main()
{
    cin >> T;
    while (T--)
    {
        long long res = 0, arr[1001] = {0}, count = 0;
        cin >> N;
        int jod_id, dl, profit;
        vector<pair<int, int> > temp;
        for (int i = 0; i < N; i++)
        {
            cin >> jod_id >> dl >> profit;
            temp.push_back(make_pair(dl, profit));
        }
        sort(temp.begin(), temp.end());

        for (int i = 0; i < N; i++)
            arr[temp[i].first] = temp[i].second;

        for (int i = 1; i <= temp[temp.size() - 1].first; i++)
        {
            res += arr[i];
            if (arr[i] > 0)
                count++;
        }
        cout << "(" << count << ": " << res << ")" << endl;
    }
}
