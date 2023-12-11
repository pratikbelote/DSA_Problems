#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num==1){
        return 1;
    }
    return num *factorial(num-1);
}

int main(){
    int ans;
    int num;
    cin>>num;
    cout<<endl;
    ans = factorial(num);
    cout<<ans<<endl;

    return 0 ;
}