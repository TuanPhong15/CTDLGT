
#include<stdio.h>
bool T[1000][10000];
bool solve( int a[],int n,int sum);
int main()
{
    int t;
    
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    fflush(stdin);
    int a[n];
    int sum=0;
  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+= a[i];
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum/2;j++)
        {
            T[i][j]=  false;
        }
    }
    if(sum==0)
        printf("YES\n");
    else if(sum%2==0)
    {
        if(solve(a,n,sum/2)==true)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else if(sum%2!=0)
        printf("NO\n");
        
}
}
bool solve(int  a[],int n,int sum)
{
    if(sum==0)
        return true;
    if(n==0&&sum!=0)
        return false;
    if(T[n][sum]!= false)
            return true;
    if(a[n-1]>sum)
        return solve(a,n-1,sum);
    else
        return solve(a,n-1,sum-a[n-1])||solve(a,n-1,sum);

}
