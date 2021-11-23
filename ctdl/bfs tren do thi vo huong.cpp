#include<bits/stdc++.h>
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

	putchar_unlocked(' '); 
} 
typedef vector<int> vi;
 
void bfs(int u, vector<vi> edge, vector<bool> &visited){
    queue<int> Q;   
    Q.push(u);
    visited[u] = true;
    while(Q.size()){
        int v = Q.front();
        wr(v);
        Q.pop();
        for(int i=0;i<edge[v].size();i++){
            if (!visited[edge[v][i]]){
                Q.push(edge[v][i]);
                visited[edge[v][i]] = true;
            }
        }
    }
}
 
void process(){
    int n, m, u;
    re(n);re(m);re(u);
    vector<vi> edge(n+1);
    vector<bool> visited(n+1, false);
    for(int i=0;i<m;i++){
        int a,b;
        re(a);re(b);
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    bfs(u, edge, visited);
    putchar_unlocked('\n');
}
 
main(){
 
    int t;
    re(t);
    while(t--) process();

}