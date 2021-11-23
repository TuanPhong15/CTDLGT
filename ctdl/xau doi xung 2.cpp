#include<string.h>
#include<stdio.h>
int dp[101][101];
int min(int a,int b){

   if(a<b)
      return a;
  return b;
}
int solve(int i,int j,char s[],int n){
       if(i>=j)
          return 0;
        if(dp[i][j]!=-1)
             return dp[i][j];
       if(s[i]==s[j])
          return solve(i+1,j-1,s,n);
       dp[i][j] =  min(solve(i+1,j,s,n)+1,solve(i,j-1,s,n)+1);
      return dp[i][j];
}

main(){

       int t,i,n;
      scanf("%d",&t);
	char s[101];
      while(t--){
        scanf("%s",s);
        n = strlen(s);
        for(i=0;i<n;i++){ 
           for(int j=0;j<n;j++){
               dp[i][j] = -1;
          } 
        }
        printf("%d\n",solve(0,n-1,s,n));
     } 

}
         