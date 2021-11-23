#include <stdio.h>
#include <ctype.h>
template <typename T>
void read(T& x)
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
int a[1000];
void nhapmang(int *a, int &n){
	for(int i=0;i<n;i++) read(a[i]);
}

  inline void swap(int  * a, int  *b)
{
int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++) 
    { 
     
        if (arr[j] <= pivot) 
        { 
            i++;   
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
    
        int pi = partition(arr, low, high); 
  

        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void rearrange(int arr[], int n)
{

    int temp[n];

    int small = 0, large = n - 1;

    int flag = true;

    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
 
        flag = !flag;
    }
 
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}
main()
{   

int t,n;read(t);
while(t--){
 read(n);
	nhapmang(a,n);
	quickSort(a,0,n-1);
rearrange(a,n);
	for(int i=0;i<n;i++)
		wr(a[i]);
		putchar_unlocked('\n');
	}
}




