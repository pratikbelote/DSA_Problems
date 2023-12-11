#include <bits/stdc++.h>
using namespace std;

void reversestring(string &str,int s){
    if(s>=(str.length()-s-1))
        return ;
        
    swap(str[s],str[str.length()-s-1]);
    reversestring(str,s+1);
}
bool ispalindrome(string &str,int s){
    if(s>=(str.length()-1-s)){
        return true;
    }
    if(str[s]==str[str.length()-1-s]){
        return ispalindrome(str,s+1);
    }else{
        return false;
    }
    
}

int main(){
    string one = "nmyy dmn";
    cout<<one.length()<<endl;
    
    // reversestring(one,0);
    // cout<<one<<endl;
    cout<<ispalindrome(one,0)<<endl;
    return 0;
}