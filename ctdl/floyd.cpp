#include <bits/stdc++.h>
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
main() {
    
    int n, m,q;
    re(n);re(m); 
        vector< vector< pair<int,int> > > adj(n);

        while (m--) {
            int u, v, c; re(u); re(v); re(c); 
            u--;
            v--;

            adj[u].push_back({v, c});
            adj[v].push_back({u, c});
        }

        // dijkstra
        vector< vector<int> > f(n);
        for (int i = 0; i < n; i++) {
            f[i] = vector<int> (n, 1000111000);


            set< pair<int, int> > all;
            all.insert({0, i});
            f[i][i] = 0;


            while (!all.empty()) {
                auto [fu, u] = *all.begin();
                all.erase(all.begin());

                if (f[i][u] != fu) continue;

                for (auto [v, c] : adj[u]) {
                    if (f[i][v] > f[i][u] + c) {
                        f[i][v] = f[i][u] + c;

                        all.insert({f[i][v], v});
                    }
                }
            }
        }

       re(q); 
        while (q--) {
            int  u, v; re(u); re(v); 
            --u;
            --v;
                wr(f[u][v]) ;
            }
        
    }
