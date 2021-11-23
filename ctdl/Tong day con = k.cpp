#include<stdio.h>
#include<ctype.h>
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
int n, dem = 0, tong;
bool OK = true;
int B[100], A[100];

void Input() {

	re (n);
	re (tong);
	for (int i = 1; i <= n; i++) {
		re (B[i]);
	}
	for (int i = 1; i <= n; i++) {
		A[i] = 0;
	}
}
void Output() {
	int a = 0;
	for (int i = 1; i <= n; i++) {
		a = a + B[i] * A[i];
	}
	if (a == tong) {
		dem++;
		for (int i = 1; i <= n; i++) {
			if (A[i] * B[i] != 0) {
				wr(B[i]);
			}
		}
		putchar_unlocked('\n'); 
	}
}
void Next_Bit() {
	int i = n;
	while (A[i] != 0) {
		A[i] = 0;
		i--;
	}
	if (i > 0) {
		A[i] = 1;
	}
	else OK = false;
}
int main() {
	Input();
	while (OK) {
		Output();
		Next_Bit();
	}
	wr(dem);putchar_unlocked('\n'); 
}

