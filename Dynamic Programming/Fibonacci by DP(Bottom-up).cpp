#include<stdio.h>
int fibonacciBottomUp(int n){
if(n<=1){
    return n;
}
int fib[n+1];
fib[0]=0;
fib[1]=1;
for(int i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
}
return fib[n];

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    for(int i=0;i<n;i++){
        printf(" %d",fibonacciBottomUp(i));
    }
    return 0;
}
