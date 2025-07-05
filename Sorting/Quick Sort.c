#include<stdio.h>
void Quicksort(int arr[],int l,int h){
    int pivot,i,j,temp;
    if(l<h){
    pivot=arr[l];
    i=l,j=h;
    while(1){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else{
            break;
        }
    }
    arr[l]=arr[j];
    arr[j]=pivot;
    Quicksort(arr,l,j-1);
    Quicksort(arr,j+1,h);

}
}
int main(){
    int arr[100],i,j,n,l,h;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   Quicksort(arr,0,n);

    printf("Print the array:");
    for(i=0;i<n;i++){
        printf(" %d", arr[i]);
    }
}
