#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num){
    int answer=0;
    
    while(num!=0){
        answer = answer*10 + num % 10;
        num = num /10;
    }
    return answer;
}

int numberComplimentToBase10Integer(int num){
    
    int copy = num;
    int mask = 0;
    while(copy!=0){
        mask = mask<<1;
        mask = mask|1;
        //cout<<mask<<endl;
        copy = copy>>1;
    }
    
    return (~num) & mask;
}

int decimalToBinary(int num){
    int answer = 0;
    int count=0;
    
    while(num!=0){
        answer = answer + (num&1)*pow(10,count) ;
        num = num/2 ;
        count+=1;
    }
    
    return answer;
}

int binaryToDecimal(int num){
    int answer=0;
    int count =0;
    while(num!=0){
        if(num%10 == 1){
            answer = answer + pow(2,count);
        }
        num=num/10;
        count = count + 1;
    }
    return answer;
}

bool checkPower(int num){
    int i=0;
    int power=1;
    
    for(int i=0;i<31;i++){
        if(power == num){
            return true;
        }
        if(power < INT_MAX/2 && power >INT_MIN/2)
        power = power*2;
    }
    return false;
}

int main(){
    
    int num;
    cin>>num;
    cout<<endl;
    
    // cout<<binaryToDecimal(num);
    //cout<<decimalToBinary(num);
    cout<<numberComplimentToBase10Integer(num);
    
    return 0;
}