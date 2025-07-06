
#include<stdio.h>
int main(){
    int n,coin[100],i,amount,temp;
    printf("Enter the coin size:");
    scanf("%d",&n);
    printf("Enter the coin:");
    for(i=0;i<n;i++){
        scanf("%d",&coin[i]);
    }
    printf("Enter the amount:");
    scanf("%d",&amount);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(coin[i]<coin[j]){
                temp=coin[j];
                coin[j]=coin[i];
                coin[i]=temp;
            }
        }
    }
    printf("Descending order:");
    for(int i=0;i<n;i++){
    printf(" %d",coin[i]);
    }
    int count=0;
         printf("\ncoins breakdown:");
    for(int i=0;i<n;i++){
        while(amount>=coin[i]){
           printf(" %d",coin[i]);
            amount-=coin[i];
            count++;
        }
    }
    printf("\nNumber count of coins:%d",count);
}
