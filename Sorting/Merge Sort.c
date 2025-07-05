#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int mid,int r ){
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
        leftarr[i]=arr[i+l];
    for(j=0;j<n2;j++)
        rightarr[j]=arr[j+mid+1];
        i=0;
        j=0;
        k=l;
        while(i<n1&&j<n2){
            if(leftarr[i]<=rightarr[j]){
                arr[k]=leftarr[i];
                i++;
            }
            else{
                arr[k]=rightarr[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            arr[k]=leftarr[i];
            i++;
            k++;
        }
        while(j<n2){
            arr[k]=rightarr[j];
            j++;
            k++;
        }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
            int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    int n,arr[59],i;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("Enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("Print the array:");
    for(int i=0;i<n;i++){
        printf("  %d",arr[i]);
    }
    return 0;
}
