#include <bits/stdc++.h>
using namespace std;

int stairclimbways(int num){
    if(num == 0)
    return 1;
    if(num<0)
    return 0;
    
    return stairclimbways(num-1) + stairclimbways(num-2);
}

int main(){
    
    int num;
    cin>>num;
    cout<<endl;
    cout<<stairclimbways(num);
    return 0 ;
}