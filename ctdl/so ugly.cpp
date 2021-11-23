#include <bits/stdc++.h>

 
using namespace std;

#define ll long long

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
vector<ll>dp;
void ugly(){
    dp.push_back(1);
    ll i2=0,i3=0,i5=0;
    ll n2=2,n3=3,n5=5;
    ll i,minn;
    for(i=1;i<1000;i++){
        minn=min(min(n2,n3),n5);
        dp.push_back(minn);
        if(minn==n2){
            i2+=1;
            n2=dp[i2]*2;
        }
        if(minn==n3){
            i3+=1;
            n3=dp[i3]*3;
        }
        if(minn==n5){
            i5+=1;
            n5=dp[i5]*5;
        }
    }
}
main()
 {
	int t;
	re(t);
	ugly();
	while(t--){
	    int n;
	    re(n);
	    wr(dp[n-1]); 
	}
}