#include <bits/stdc++.h>
using namespace std;
int Next_Permutation (int X[], int N) {
    int i=k, j  , R,S,D;
    while (i>0 && X[i]==1)
    {
       i--;
    }
    if (R>0)
    {
      for (j= i+1; j<= i + R ; j++)
      {
         X[j] = X[i];
         k= k+R;
      }
      if (S>0)
      {
         k=k+1;
         X[k]=S;
      }
      
    } else OK = 0;
    
    
}
int main()
{
    int so_test;
cin>>T;
while(T--)
{
}
}