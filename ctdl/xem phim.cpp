#include<bits/stdc++.h>

using namespace std;
int c,n;
int a[100010];
bool f[101][25001] = {false};

main() {
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);	
    cin >> c >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 0; i <= n; i++)
        f[i][0] = true;
    for(int i = 1; i <= n; i++)
        for (int j = 0; j <= c; j++)
            if ((j - a[i] >= 0 && f[i - 1][j - a[i]]) || f[i - 1][j])
                f[i][j] = true;

    for (int j = c; j >= 1;j--) {
        //cout << f[n][j] << "\n";
        if (f[n][j])
            return !(cout << j);
    }
    return !(cout << 0);
}

 
