#include<stdio.h>
#include<ctype.h>
#include<malloc.h>
#include <stdlib.h>
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

//
void backtracking(int *nums,int numsSize,int *used,int temp,int target,int k,int *ans,int tempi){
    if(k==0){
        *ans=1;
        return;
    }
    if(temp==target){
        temp=0;
        // for(int i=0;i<numsSize;i++) 
            // if(used[i]) printf("%d ",i);
        // printf("\n");
        backtracking(nums,numsSize,used,temp,target,k-1,ans,0);
    }
    if(temp>target)         return;
    for(int i=tempi;i<numsSize;i++){
        if(*ans) break;
        if(!used[i]){
            used[i]=1;
            backtracking(nums,numsSize,used,temp+nums[i],target,k,ans,i);
            used[i]=0;
        }
    }
    return;
}
bool canPartitionKSubsets(int* nums, int numsSize, int k){
    int sum=0;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    if(sum%k!=0)    return 0;
    int target=sum/k,ans=0;
    int *used=(int *)calloc(sizeof(int),numsSize);
    // printf("%d\n",target);
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            used[i]=1;
            k--;
        }
    }
    backtracking(nums,numsSize,used,0,target,k,&ans,0);
    return ans;
}
main()
{
	int t,n,k; re(t);int a[100];
	while(t--)
	{
		re(n); re(k);
		for(int i = 0; i < n ; i ++) re(a[i]);
		wr(canPartitionKSubsets(a,n,k));
	}
}
