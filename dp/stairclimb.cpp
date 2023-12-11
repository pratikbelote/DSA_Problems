#include <bits/stdc++.h>
using namespace std;

int stairclimbways(int num,int dp[]){
    if(num == 0){
        dp[num]= 1;
        return dp[num];
    }
    if(num<0){
        return 0;
    }
    
    if(dp[num]!=-1)
        return dp[num];
    
    dp[num]= stairclimbways(num-1,dp) + stairclimbways(num-2,dp);
    return dp[num];
}
int main(){
    
    int num;
    cin>>num;
    
    int dp[num+1] ;
    memset(dp, -1, sizeof dp);
    
    cout<<endl;
    cout<<stairclimbways(num,dp);
    return 0;
}