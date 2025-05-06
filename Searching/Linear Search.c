#include<stdio.h>
int n,a[10],i,item,loc;
void input_array(int n){
printf("Enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void Linear_search(int n,int item){
    int count=0;
     for(int i=0;i<n;i++){
    if(a[i]==item){
            loc=i;
    }

            count++;
     }
     printf("Comparison is:%d\n",count);
     if(loc){
        printf("LOC found:%d",loc);
     }
    else{
        printf("Element found not");
    }
}
int main(){
    int n,a[100],item,i,loc;
    printf("Enter size:");
    scanf("%d",&n);
    input_array(n);
    printf("Enter the element u want to search:");
    scanf("%d",&item);
    Linear_search(n,item);
     return 0;
}
