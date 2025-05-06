#include<stdio.h>
int array[100],temp;
 void input_array(int n){
printf("Enter the array size:");
for(int i=1;i<n;i++){
    scanf("%d",&array[i]);
}
}
void Bubble_sort(int n){
    int outer_count=0;
     int inner_count=0;
    for(int i=1;i<n;i++){
            outer_count++;
        for(int j=1;j<n-i;j++){
             inner_count++;
                if(array[j]>array[j+1]){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;

                }
        }
    }
  printf("Sorted array is:");
  for(int i=1;i<n;i++){
    printf(" %d",array[i]);
  }
  printf("\nTotal comparison outer loop=%d\n",outer_count);
  printf("Total comparison inner loop=%d\n",inner_count);

}

int main(){
    int n,array[100];
    printf("Enter size:");
    scanf("%d",&n);
    input_array(n);
    Bubble_sort(n);
}
