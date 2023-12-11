#include <bits/stdc++.h>
using namespace std;

//function call itself again and again to get solution
//format1 -> base case, rucursive relation, processing part = head recursion
//format2 -> base case, procesing part, recursive relation = tail recursion

int fibonnacci(int num){
    if(num-1==0){
        return 0;
    }
    if(num-1==1){
        return 1;
    }
    
    return fibonnacci(num-1) + fibonnacci(num-2);
}

int fib(int num){
    int a=0;
    int b=1;
    if(num-1==0){
        return 0;
    }
    else if(num-1==1){
        return 1;
    }
    int ans;
    
    for(int i=1;i<num;i++){
        ans = a+b;
        b=a;
        a=ans;
    }
    
    return ans;
}



int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<fibonnacci(n)<<endl;
    cout<<fib(n)<<endl;

    return 0 ;
}