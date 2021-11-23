#include <bits/stdc++.h>
using namespace std;
bool xet[10];
int final[10];
int n;
void init()
{
    for (int i = 1; i <= n; i++)
    {
        xet[i] = true;
    }
}
void print()
{
    for (int i = 1; i <= n; i++)
    {
       cout<<final[i];
    }
    cout<<" ";
}
void check(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (xet[j])
        {
            // cout << i << "va" << j<<endl;
            xet[j]=false;
            final[i] = j;
            if (i == n)
            {
              print();
            }
            else check(i+1);
            xet[j]=true;
        }
    }
}
int main()
{
    int m, T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        init();
        check(1);
        cout<<endl;
    }
}