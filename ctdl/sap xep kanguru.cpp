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

	putchar_unlocked('\n'); 
} 
inline void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void partition(int a[], int low, int high, int& i, int& j)
{
    
    if (high - low <= 1) {
        if (a[high] < a[low])
            swap(&a[high], &a[low]);
        i = low;
        j = high;
        return;
    }
 
    int mid = low;
    int pivot = a[high];
    while (mid <= high) {
        if (a[mid] < pivot)
            swap(&a[low++], &a[mid++]);
        else if (a[mid] == pivot)
            mid++;
        else if (a[mid] > pivot)
            swap(&a[mid], &a[high--]);
    }
 

    i = low - 1;
    j = mid; 
}
 

void quickSort3(int a[], int low, int high)
{
    if (low >= high) 
        return;
 
    int i, j;
 

    partition(a, low, high, i, j);
 
 
    quickSort3(a, low, i);
    quickSort3(a, j, high);
}

main()
{
	int t, n,res; re(t);
	while(t--)
	{
		re(n); int a[n];
		res = n;
		for(auto & i : a ) re(i);
		quickSort3(a,0,n-1);
		for(int i = n/2-1,j=n-1;i>=0 && j>=n/2;)
		{
			if(a[j]>=2*a[i])
			{
				res--;
				i--;j--;
			}else i--;
		}
		wr(res);
	}
}