

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256
  

typedef struct charFreq {
    char c;
    int f;
} charFreq ;
  
void swap(charFreq* x, charFreq* y)
{
    charFreq z = *x;
    *x = *y;
    *y = z;
}

void maxHeapify(charFreq freq[], int i, int heap_size)
{
    int l = i * 2 + 1;
    int r = i * 2 + 2;
    int largest = i;
    if (l < heap_size && freq[l].f > freq[i].f)
        largest = l;
    if (r < heap_size && freq[r].f > freq[largest].f)
        largest = r;
    if (largest != i) {
        swap(&freq[i], &freq[largest]);
        maxHeapify(freq, largest, heap_size);
    }
}
  
void buildHeap(charFreq freq[], int n)
{
    int i = (n - 1) / 2;
    while (i >= 0) {
        maxHeapify(freq, i, n);
        i--;
    }
}
  

charFreq extractMax(charFreq freq[], int heap_size)
{
    charFreq root = freq[0];
    if (heap_size > 1) {
        freq[0] = freq[heap_size - 1];
        maxHeapify(freq, 0, heap_size - 1);
    }
    return root;
}

int rearrange(char str[], int d)
{
  
    int n = strlen(str);
  
 
    charFreq freq[MAX] = { { 0, 0 } };
  
    int m = 0; 
  
 
    for (int i = 0; i < n; i++) {
        char x = str[i];
  
        if (freq[x].c == 0)
            freq[x].c = x, m++;
  
        (freq[x].f)++;
        str[i] = '\0'; 
    }
  
  
    buildHeap(freq, MAX);
  
 
    for (int i = 0; i < m; i++) {
        charFreq x = extractMax(freq, MAX - i);
  
        int p = i;
        while (str[p] != '\0')
            p++;
        for (int k = 0; k < x.f; k++) {
            if (p + d * k >= n) {
                return -1;
            }
            str[p + d * k] = x.c;
        }
        
    }return 1;
}
main() 
{
	char s[10001];
    int t,d; scanf("%d",&t);
    while (t--)
    {
    	scanf("%d",&d);
        scanf("%s",s);
    printf("%d\n",rearrange(s,d)) ;
    }

}
