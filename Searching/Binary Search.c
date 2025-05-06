#include<stdio.h>
int array[100];
void input_array(int n){
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
int Binary_search(int n,int item){
    int l=0,r=n-1,count=0,i;
    while(l<=r){
        int mid=(l+r)/2;
        count++;
        if(array[mid]==item){
            printf("Comparison is:%d",count);
            return mid;
        }
         if(array[mid]<item){
            l=mid+1;
        }
        if(array[mid]<item){
            r=mid-1;
        }
    }

}
int main(){
    int n,array[100],item;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array:");
    input_array(n);
    printf("Enter the element u want to search:");
    scanf("%d",&item);
    int k=Binary_search(n,item);
    printf("\nIndex is:%d",k);
    return 0;

}
