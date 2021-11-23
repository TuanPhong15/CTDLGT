#include <bits/stdc++.h>
using namespace std;

template <typename T> void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
    x *= f;
}

template<typename T> void wr(T n) 
{ 
	bool neg = 0; 
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar('\n'); 
} 
int nthUglyNumber(int n)
{
 
  int pow[40] = { 1 };

  for (int i = 1; i <= 30; ++i)
    pow[i] = pow[i - 1] * 2;
 
  int l = 1, r = 2147483647;
 
  int ans = -1;

  while (l <= r) {
 
    int mid = l + ((r - l) / 2);

    int cnt = 0;
    for (long long i = 1; i <= mid; i *= 5)
 
    {
    
      for (long long j = 1; j * i <= mid; j *= 3)
 
      {
       
        cnt += upper_bound(pow, pow + 31,
                           mid / (i * j)) - pow;
      }
    }
    if (cnt < n)
      l = mid + 1;
    else
      r = mid - 1, ans = mid;
  }
 
  return ans;
}
 
main()
 {
	int t;
	re(t);
	while(t--){
	    int n;
	    re(n);
	    wr(nthUglyNumber(n)); 
	}
}
