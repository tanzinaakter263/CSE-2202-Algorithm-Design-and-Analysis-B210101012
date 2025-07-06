
#include<stdio.h>
int main(){
int n; float value[70],weight[60],ratio[90],capacity,temp;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the array of values:");
for(int i=0;i<n;i++){
scanf("%f",&value[i]);
}
printf("Enter the array of weights:");
for(int i=0;i<n;i++){
scanf("%f",&weight[i]);
}
printf("Enter the capacity:");
scanf("%f",&capacity);
printf("Print the ratio:");
 for(int i=0;i<n;i++){
ratio[i]=value[i]/weight[i];
printf(" %f",ratio[i]);
}
printf("\nDescending order of ratio:");
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(ratio[i]<ratio[j]){
temp=ratio[j];
ratio[j]=ratio[i];
ratio[i]=temp;
 temp=value[j];
 value[j]=value[i];
 value[i]=temp;
 temp=weight[j];
 weight[j]=weight[i];
 weight[i]=temp;
 }
 }
}
for(int i=0;i<n;i++){
printf(" %f",ratio[i]); }
float total_value=0;
float remaining_capacity=capacity;
for(int i=0;i<n;i++){
if(weight[i]<=remaining_capacity){
 total_value+=value[i];
 remaining_capacity-=weight[i];
}
else{
 //float fraction=remaining_capacity/weight[i];//
 total_value+=(value[i]/weight[i])*remaining_capacity;
 remaining_capacity=0;
}
}
printf("\nTotal value:%f",total_value);
return 0;
}

