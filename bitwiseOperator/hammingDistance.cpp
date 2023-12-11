#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t num){
    int count=0;
    while(num!=0){
        if(num&1==1){
            count++;
        }
        num=num>>1;
    }
    return count;
}

int main(){
    
    uint32_t num;
    cin>>num;
    cout<<num<<endl;
    
    cout<<hammingWeight(num)<<endl;
    
    return 0;
}