#include<bits/stdc++.h>
using namespace std;
int Knapsack(int n,int weight[],int value[],int C){
    int dp[n+1][C+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=C;j++){
                if(i==0||j==0){
                    dp[i][j]= 0;
                }
           else if(weight[i]<=j){
                dp[i][j]=max(dp[i-1][j],value[i]+dp[i-1][j-weight[i]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][C];
}
int main(){
    int n,weight[100],value[100],capacity;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter weight:";
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    cout<<"Enter value:";
    for(int i=0;i<n;i++){
        cin>>value[i];
    }
    cout<<"Enter capacity:";
        cin>>capacity;
    cout<<Knapsack(n,weight,value,capacity)<<endl;
    return 0;
}

