#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=0;
    
    while(i<n){
        
        int j=0;
        while(j<n-i){
            cout<<j+1<<' ';
            j+=1;
        }
        j=(2*i);
        while(j>0){
            cout<<"* ";
            j-=1;
        }
        j=0;
        
        while(j<n-i){
            cout<<n-i-j<<' ';
            j+=1;
        }
        
        i+=1;
        cout<<endl;
    }
    
    return 0;
}