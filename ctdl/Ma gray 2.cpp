#include<bits/stdc++.h>
using namespace std;

inline char x0r(char c1, char c2) {
    return ((c1-'0')^(c2-'0')) + '0';
}

string g2b(const string& g) {
    string b(g);
    for (int i = 1; i < g.length(); i++) {
        if (g[i] == '0') {
            b[i] = b[i-1];
        } else {
            b[i] = x0r(b[i-1], '1');
        }
    }
    return b;
}

main() {
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t;
	cin >> t;
	while (t-- > 0) {
	    string g; cin >> g;
	    cout << g2b(g) << '\n';
	}

}