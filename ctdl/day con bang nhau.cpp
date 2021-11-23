#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void re(T& x)
{
    x = 0; T f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) x = x * 10 + ch - '0', ch = getchar_unlocked();
    x *= f;
}

int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for(int i=0;i<N;i++) {
            sum+=arr[i];
        }
        
        if(sum%2!=0)
            return 0;
        
        int halfSum = sum/2;
        
        vector<vector<int>> dpMatrix(N+1, vector<int>(halfSum+1, 0));
        
        for(int i=0;i<N;i++) {
            dpMatrix[i][0] = 1;
        }
        
        for(int i=1;i<=N;i++) {
            for(int j=1;j<=halfSum;j++) {
                if(j >= arr[i-1]) {
                    dpMatrix[i][j] = dpMatrix[i-1][j-arr[i-1]] || dpMatrix[i-1][j];
                } else {
                    dpMatrix[i][j] = dpMatrix[i-1][j];
                }
            }
        }
        
        return dpMatrix[N][halfSum];
        
    }


main(){
    int t,N;int a[100];
    re(t);
    while(t--){
        re(N);
        for(int i = 0;i < N;i++)
            re(a[i]);
        if(equalPartition(N, a))
            puts("YES");
        else
            puts("NO");
    }
} 