#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int array[],int size){
    set<int> s;
    int count=0;
    for(int i=0;i<size;i++){
        s.insert(array[i]);
        count++;
        if(s.size()!=count)
            return array[i];
    }
    return -1;
}

int findDuplicate1(int array[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^array[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    if(ans!=0)
    return ans;
    
    return -1;
}

int main(){
    
    int array[7]= {1,2,3,4,4,5,6};
    
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<findDuplicate(array,size)<<endl;
    cout<<findDuplicate1(array,size);
    
    return 0;
}