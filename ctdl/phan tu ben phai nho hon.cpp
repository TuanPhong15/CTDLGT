#include<bits/stdc++.h>
using namespace std;

template <typename T> void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar_unlocked('-'); 
	while (i >= 0)	putchar_unlocked(snum[i--]); 
	putchar_unlocked(' '); 
} 
void Try(int a[], int n, int next[], char order)
{

    stack<int> S;

    for (int i=n-1; i>=0; i--)
    {

        while (!S.empty() &&
              ((order=='G')? a[S.top()] <= a[i]:
                           a[S.top()] >= a[i]))
            S.pop();
  
        if (!S.empty())
            next[i] = S.top();

        else
            next[i] = -1;

        S.push(i);
    }
}

void solve(int a[], int n)
{
    int NG[n]; 
    int RS[n]; 

    Try(a, n, NG, 'G');

    Try(a, n, RS, 'S');

    for (int i=0; i< n; i++)
    {
        if (NG[i] != -1 && RS[NG[i]] != -1)
            wr(a[RS[NG[i]]]) ;
        else
            wr(-1);
    }
}

main()
{
	int t; re(t);
	int n; 
	while(t--)
	{
re(n); int a[n];
for(auto &i : a) re(i);

    solve(a, n);
    putchar_unlocked('\n');
	}
 
} 