#include<bits/stdc++.h>
using namespace std;
#define int long long
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

	putchar_unlocked('\n'); 
}
    int validate(char &c1, char &c2) {
        if(c2 == '0') {
            if(c1 == '1' || c1 == '2') return 1;
            else return 0;
        }
        else {
            if(c1 == '1' || c1 == '2') {
                if(c1 == '2' && c2 > '6') return 2;
                else return 3;
            }
            else {
                return 2;
            }
        }
    }
    
    int numDecodings(string s) {
        int ways = 0;
        int iplus1 = 1, iplus2 = 0;
        int i = 0, ret = 0;
        
        for(i = s.size() - 1; i >= 0; i--) {
            if(s[i] != '0') {
                if(i == s.size() - 1) {
                    ways = iplus1;
                }
                else {
                    ret = validate(s[i], s[i + 1]);            
                    if(!ret) { 
                        return ret;
                    }
        
                    if(ret == 1) {
                        ways = iplus2;
                    }
                    else if(ret == 2) {
                        ways = iplus1;
                    }
                    else {
                        ways = iplus1 + iplus2;
                    }
                }
            }
            else {
                ways = 0;
            }
            
            iplus2 = iplus1;
            iplus1 = ways;
        }
        
        return ways;
    }
main()
{
	int t; re(t);
	string s;
	while(t--)
	{
		cin >> s;
		wr(numDecodings(s));
	}
}
