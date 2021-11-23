#include <iostream>
#include <vector>
#include <set>
using namespace std;

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
} 
void compress(vector<int> &a) {
    set<int> s(a.begin(), a.end());
    vector<int> b(s.begin(), s.end());
    for (int &x: a) {
        x = lower_bound(b.begin(), b.end(), x) - b.begin() + 1;
    }
}

struct Fenwick {
    int n;
    vector<int> f;
    Fenwick(int n): n(n), f(n+1, 0) {}
    void set(int x, int i) {
        for (; i<=n; i += i&(-i)) f[i] = max(f[i], x);
    }
    int get(int i) const {
        int r = 0;
        for (; i>=1; i -= i&(-i)) r = max(r, f[i]);
        return r;
    }
};

main() {
    

    int n; re(n);
    vector<int> a(n);
    for (int &x: a) re(x);

    compress(a);

    Fenwick bit(n);
    for (int x: a) bit.set(bit.get(x-1) + 1, x);

    wr(bit.get(n)) ;

}