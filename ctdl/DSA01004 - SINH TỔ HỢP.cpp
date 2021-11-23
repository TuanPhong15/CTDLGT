//CPPCOM02 - COMINATION 2
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

}  
 
void combinationUtil(int a[], int data[],  
                    int b, int k,  
                    int index, int r)  
{  
    if (index == r)  
    {  
        for (int j = 0; j < r; j++)  
            wr(data[j]);  
        putchar_unlocked(' ');  
        return;  
    }  
  
    for (int i = b; i <= k &&  
        k - i + 1 >= r - index; i++)  
    {  
        data[index] = a[i];  
        combinationUtil(a, data, i+1,  
                        k, index+1, r);  
    }  
}  
void xuatmang(int a[], int n, int k)  
{  
    int data[k];  
    combinationUtil(a, data, 0, n-1, 0, k);  
}  
main()  
{  
int n, k, t;
re(t);
while (t--)
{
	 re(n);re(k);
	int a[n];
	for (int i = 0; i < n;i++)
	   a[i] = i+1;
    xuatmang (a, n, k);  
    	putchar_unlocked('\n'); 
}
   
}
