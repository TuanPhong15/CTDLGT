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

void indapan(char a[], int n) 
{ 
	for (int i = 0; i < n; i++) { 
		putchar_unlocked(a[i]); 
	} 
	 putchar_unlocked(' '); 
} 
void chuoi(int n, char a[], int i) 
{ 
	if (i == n) { 
		indapan(a, n); 
		return; 
	} 
	a[i] = 'A'; 
	chuoi(n, a, i + 1); 
	a[i] = 'B'; 
	chuoi(n, a, i + 1); 
} 

 main() 
{ 
int t; 
re(t)	;
int n ;
while( t -- ){
	 re(n);
	 char a[n]; 
	chuoi(n, a, 0);
	putchar_unlocked('\n');  }
}
