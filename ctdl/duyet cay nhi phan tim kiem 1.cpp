#include<stdio.h>
#include<ctype.h>
#include<malloc.h>
template <typename T> void re(T& x)
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
	if (n < 0) n *= -1, neg = 1; 
	char snum[20]; int i = 0; 
	do	{ snum[i++] = n % 10 + '0'; 	n /= 10; } 	while (n); 
	--i; 
	if (neg) putchar('-'); 
	while (i >= 0)	putchar(snum[i--]); 
	putchar(' '); 
} 
typedef struct node{
    int data;
    struct node *left,*right;
}node;

void postorder(node *root){
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    wr(root->data);
    return;
}

void make(node **root, int l, int r, int n, int a[]){
    if(l>r) return;
    node *temp=(node*)malloc(sizeof(node));
    temp->data=a[l];
    temp->left=temp->right=NULL;
    *root=temp;
    if(l==r) return;
    int start=l+1;
    while(a[l]>a[start] && start<r+1)
        start++;
    start--;
    make(&temp->left,l+1,start,n,a);
    make(&temp->right,start+1,r,n,a);
    return;
}

bool check(int a[], int n){
    int j;
    for(j=1;j<n;j++)
        if(a[j-1]>a[j]) return false;
    return true;
}

void store_inorder(node *root, int a[], int *count){
    if(!root) return ;
    store_inorder(root->left,a,count);
    a[(*count)++]=root->data;
    store_inorder(root->right,a,count);
    return;
}

main() {
	int t, n,a[1001],b[1001],j,flag;
	re(t);
	while(t--){
	    re(n);
	    for(j=0;j<n;j++)
	        re(a[j]);
	    node *root=NULL;
	    make(&root,0,n-1,n,a);
	    int count=0;
	    store_inorder(root,b,&count);
	    flag=check(b,n);
	    if(flag)
	    {postorder(root);
	    	putchar('\n'); 
		}
	        
	        
	    else puts("NO");
	}

}