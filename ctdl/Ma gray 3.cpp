#include<bits/stdc++.h>
using namespace std;

inline char x0r(char c1, char c2) {
    return ((c1-'0')^(c2-'0')) + '0';
}

string b2g(const string& b) {
    string g(b);
    for (int i = 1; i < g.length(); i++) {
        g[i] = x0r(b[i-1], b[i]);
    }
    return g;
}
 


main() {
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;
	cin >> t;
	while (t-- > 0) {
	    string b; cin >> b;
	    cout << b2g(b) << '\n' ;
	}

}