#include <iostream>
#include <stack>
#include <limits.h>
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
using namespace std;

void NFG(int a[], int n, int freq[])
{
 

    stack<int> s;
    s.push(0);
    int res[n] = { 0 };
    for (int i = 1; i < n; i++)
    {
 
        if (freq[a[s.top()]] > freq[a[i]])
            s.push(i);
        else {
 
            while ( !s.empty()
                   && freq[a[s.top()]] < freq[a[i]])
            {
 
                res[s.top()] = a[i];
                s.pop();
            }
            s.push(i);
        }
    }
 
    while (!s.empty()) {
        res[s.top()] = -1;
        s.pop();
    }
    for (int i = 0; i < n; i++)
    {
        wr(res[i]);
    }
}

main()
{
 int t,n; re(t);
 while(t--)
 {
 	re(n);int a[n];
 	for(auto &x :a) re(x);
    int freq[10000 + 1] = { 0 };
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
 } NFG(a, n, freq);
  putchar_unlocked('\n'); 
}}