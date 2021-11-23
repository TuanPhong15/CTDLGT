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
int min(int a, int b){if(a<b) return a; return b;
}
int n;
int a[16][16];
bool visited[16] = {0};
int kq = 1e9+7;
 
bool ktra(){
    for(int i=1;i<=n;i++){
        if (visited[i] == false){
            return false;
        }
    }
    return true;
}
 
void Try(int m,int dem){
    if (dem < kq){
        if (ktra()){
            kq = min(kq,dem + a[1][m]);
        }
        else{
            for(int i=1;i<=n;i++){
                if (visited[i] == false && m != i ){
                    visited[i] = true;
                    Try(i,dem+a[m][i]);
                    visited[i] = false;
                }     
            }
        }
    }
}
main(){

      re(n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            re(a[i][j]) ;
     visited[1] = true;
    Try(1,0);
    wr(kq);

} 