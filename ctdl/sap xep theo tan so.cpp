#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
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
  
struct BSTNode 
{ 
    struct BSTNode *left; 
    int data; 
    int freq; 
    struct BSTNode *right; 
}; 

struct dataFreq 
{ 
    int data; 
    int freq; 
}; 

inline int compare(const void *a, const void *b) 
{ 
    return ( (*(const dataFreq*)b).freq - (*(const dataFreq*)a).freq ); 
} 

inline BSTNode* newNode(int data) 
{ 
    struct BSTNode* node = new BSTNode; 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
    node->freq = 1; 
    return (node); 
} 

 inline BSTNode *insert(BSTNode *root, int data) 
{ 
    if (root == NULL) 
        return newNode(data); 
    if (data == root->data)
        root->freq += 1; 
    else if (data < root->data) 
        root->left = insert(root->left, data); 
    else
        root->right = insert(root->right, data); 
    return root; 
} 
 
inline void store(BSTNode *root, dataFreq count[], int *index) 
{ 

    if (root == NULL) return; 

    store(root->left, count, index); 
    count[(*index)].freq = root->freq; 
    count[(*index)].data = root->data; 
    (*index)++; 
    store(root->right, count, index); 
} 

void sortByFrequency(int *arr, int &n) 
{ 

    struct BSTNode *root = NULL; 
    for (int i = 0; i < n; ++i) 
        root = insert(root, arr[i]); 
    dataFreq count[n]; 
    int index = 0; 
    store(root, count, &index); 
    qsort(count, index, sizeof(count[0]), compare);  
    int j = 0; 
    for (int i = 0; i < index; i++) 
    { 
        for (int freq = count[i].freq; freq > 0; freq--) 
            arr[j++] = count[i].data; 
    } 
} 

void printArray(int *a, int &n) 
{ 
    for (int i = 0; i < n; i++) 
        wr(a[i]); 
    putchar_unlocked('\n'); 
} 
main()
{

	int t, n; re(t); int a[10000];
	while (t--)
	{
	 re(n);
		for (int i = 0; i < n; i++)
		re(a[i]);
	sortByFrequency(a,n);
	printArray(a,n);
}}
