#include<bits/stdc++.h>
using namespace std;

void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void alternateSwap(int array[],int size){
    for(int i =0;i<size;i+=2){
        if(i+1<size)
        swap(array[i],array[i+1]);
    }
}

int unique(int array[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ array[i];
    }
    return ans;
}

bool uniqueNumberOfOccurance(int array[],int size){
    map<int,int> m;
    set<int> s;
    for(int i =0;i<size;i++){
        m.insert({array[i],m[array[i]]++});
        cout<<m[array[i]];
        //m[array[i]]++;
    }
    cout<<endl;
    for(auto i : m){
        s.insert(i.second);
    }
    // for(auto j : s){
    // }
    // vector<int> o;
    // for(auto j : o){
    // }
    if(s.size() == m.size())
    return true;
    
    return false;
}

int main(){
    
    int array[7] = {4,3,2,2,3,4,4};
    // for(auto j : array){
    // }
    
    int size = sizeof(array)/sizeof(array[0]);
    
    // alternateSwap(array,size);
    
    // print(array,size);
    
    cout<<uniqueNumberOfOccurance(array,size);
    
    return 0;
}