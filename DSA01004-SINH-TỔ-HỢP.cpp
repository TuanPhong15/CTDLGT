#include <bits/stdc++.h>
using namespace std;
int x[100];
int n, k, T;
bool check = true;
void process(void)
{
    int i = k;
    while (i > 0 && x[i] == n - k + i)
    {
       
            i--;
      
    }
    if (i > 0)
    {
        x[i] += 1;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[i] + j - i;
        }
    }
    else
    {
        check = false;
    }
}
int main()
{

    cin >> T;
    while (T--)
    {
        cin >> n >> k;
           for (int i = 1; i <= k; i++)
        {
            x[i] = i;
        }
        while (check)
        {
          
            process();
            for (int i = 1; i <= k; i++)
            {
                cout << x[i];
            }
            cout << " ";
        }
       
        cout<<endl;
    }
}