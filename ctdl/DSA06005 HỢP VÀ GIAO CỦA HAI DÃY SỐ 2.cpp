#include <iostream>
#include <vector>
#include <algorithm>
template <typename T>
void re(T& x)
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

	if (n < 0) 
		n *= -1, neg = 1; 

	char snum[20]; 
	int i = 0; 
	do
	{ 
		snum[i++] = n % 10 + '0'; 
		n /= 10; 
	} 

	while (n); 
	--i; 

	if (neg) 
		putchar_unlocked('-'); 

	while (i >= 0) 
		putchar_unlocked(snum[i--]); 

	putchar_unlocked(' '); 
} 

 main()
{

	int t,n,m; re(t);
	while (t--)
	{
	re(n);re(m);
	std::vector<int> a(n), b(m), Hop, Giao;
    for(int i = 0; i < n; ++i)
    re(a[i]);
    for(int i = 0; i < m; ++i)
    re(b[i]);
    
    sort(begin(a), end(a));
    sort(begin(b), end(b));
    
    set_union(begin(a), end(a), begin(b), end(b),                  
                   back_inserter(Hop));
    sort(begin(Hop), end(Hop));
    for (int i : Hop) wr(i);
	putchar_unlocked('\n'); 
	set_intersection(begin(a), end(a), begin(b), end(b),                  
                          back_inserter(Giao));
    for (int i : Giao) wr(i);
	putchar_unlocked('\n'); 
	}
    }
