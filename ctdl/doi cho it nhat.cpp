#include<bits/stdc++.h>
using namespace std;

template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar();
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
		putchar('-'); 

	while (i >= 0) 
		putchar(snum[i--]); 

	putchar('\n'); 
} 
void merge(int a[],int l,int mid,int h,int &c){
    int p=l,q=h;
    vector<int>vec;
    while(p<=mid && q<=h){
        if(a[p]>a[q]){
            c+=1;
            vec.push_back(a[p++]);
        }
        else{
            vec.push_back(a[q++]);
        }
    }
    while(p<=mid){
        vec.push_back(a[p++]);
    }
    while(q<=h){
        vec.push_back(a[q++]);
    }
    for(int i=h;i>=l;i--){
        a[i]=vec.back();
        vec.pop_back();
    }
}

void mergesort(int a[],int l,int h,int &c){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid,c);
        mergesort(a,mid+1,h,c);
        merge(a,l,mid,h,c);
    }
}

int minSwaps(int a[], int N){
    int c=0,i,j,pos,t;
    // mergesort(A,0,N-1,c);
    for(i=0;i<N-1;i++){
        pos=i;
        for(j=i+1;j<N;j++){
            if(a[pos]>a[j]){
                pos=j;
            }
            
        }
        t=a[i];
        a[i]=a[pos];
        a[pos]=t;
        if(pos!=i)  
            c++;
    }
    return c;
}

main(){
	int tc;
	re(tc);
	while(tc--){
		int n;
		re(n);
		int nums[n];
		for(int i = 0; i < n; i++)
			re(nums[i]);
		wr(minSwaps(nums,n));
	}

}