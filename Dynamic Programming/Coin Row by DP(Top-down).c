#include <stdio.h>
int max(int a,int b) {
    return (a>b)?a:b;
}
int coinRowTopDown(int coins[],int n,int *memo) {
    if (n<=0) {
        return 0;
    }
    if (memo[n]!=-1) {
        return memo[n];
    }
    memo[n]=max(coins[n-1]+coinRowTopDown(coins,n-2,memo),coinRowTopDown(coins,n-1,memo));
    return memo[n];
}
 int main() {
    int coins[100]= {5,1,2,10,6,2};
    int n=sizeof(coins)/sizeof(coins[0]);
    int memo[n+1];
    for (int i=0;i<=n;i++) {
        memo[i]=-1;
    }
    int result=coinRowTopDown(coins,n,memo);
    printf("Maximum value of top down approach:%d\n",result);
    return 0;
}
