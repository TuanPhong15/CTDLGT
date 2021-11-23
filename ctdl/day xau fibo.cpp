#include<stdio.h>
#include<ctype.h>
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

char check(int n, long k, long length[]) {
        if (n == 1) {
            return 'A';
        }

        if (n == 2) {
            return 'B';
        }

        if (k > length[n - 2]) {
            return check(n - 1, k - length[n - 2], length);
        }

        return check(n - 2, k, length);
    }
main() {
        long length[93];
        length[1] = 1;
        length[2] = 1;

        for (int i = 3; i < 93; i++) {
            length[i] = length[i - 2] + length[i - 1];
        }
        int t,n,k; re(t);
        while(t--) {

             re(n);

             re(k);
putchar_unlocked(check(n, k, length));
	putchar_unlocked('\n');
            }
        }



