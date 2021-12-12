#include <bits/stdc++.h>
using namespace std;

int a[50], b[50], n, sum, k;

bool check() {
    int temp = 0;
    for (int i = 1; i <= n; i++) {
        temp += a[i] * b[i];
    }
    if (temp == sum / 2) return true;
    return false;
}

void backTrack(int i) {
    if (k==1) return;
    for (int j = 1; j >= 0; j--) {
        if (k) return;
        b[i] = j;
        if (i == n) {
            if (check()==true) {
                k++;
                return ;
            }
        } else backTrack(i + 1);

    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        k = 0;
        sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        if (n == 1 || (n == 2 && a[1] != a[2]) || sum % 2 != 0);
        else backTrack(1);

        if (k==0) cout << "1";
        else cout << "0";
        cout << endl;
    }
}