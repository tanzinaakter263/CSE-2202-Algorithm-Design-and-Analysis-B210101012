#include<bits/stdc++.h>
using namespace std;
int FibMemo(int n,vector<int> &memo){
    if(n<=1)
        return n;
    if(memo[n]!=-1)
        return memo[n];
    memo[n]=FibMemo(n-1,memo)+FibMemo(n-2,memo);
    return memo[n];
}
int main(){
    int n=8;
    vector<int> memo(n+1,-1);
    cout<<n<<endl;
    cout<<"The fib"<<" "<<FibMemo(n,memo)<<endl;
}
