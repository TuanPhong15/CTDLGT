#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<ctype.h>
template <typename T>
void re(T& x)
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
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar('\n'); 
} 

typedef pair<int, int> ii;
int n, m;
vector<ii> a;
vector< vector<int> > f;   


main(){
    int t;re(t);
    while(t--)
    {
    	    re(n);re(m);
    a.resize(n+1);
    for(int i=1;i<=n;i++) re(a[i].first) ;
	 for(int i=1;i<=n;i++)  re(a[i].second); // first = WEIGHT, second = VALUE;
    f.resize(n+1, vector<int> (m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=m;j++){
            f[i][j] = f[i-1][j]; 
            if (j - a[i].first >= 0)   
                f[i][j] = max(f[i][j], f[i-1][j-a[i].first] + a[i].second); 
           
        }
    }
    wr(f[n][m]);
	}

} 
