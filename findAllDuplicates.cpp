#include<bits/stdc++.h>
using namespace std;

void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i];
    }
    cout<<endl;
}

void findAllDuplicate(int array[],int size){
    for(int i =0;i<size;i++){
        array[array[i]%size] = array[array[i]%size] + size;
    }
    cout <<"repeating elements are -" <<endl;
    for(int i =0;i<size;i++){
        if(array[i]>2*size){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    
    int array[11]= {1,2,1,3,4,4,5,6,6,6,2};
    
    int size = sizeof(array)/sizeof(array[0]);
    
    // cout<<findDuplicate(array,size)<<endl;
    // cout<<findDuplicate1(array,size);
    
    findAllDuplicate(array,size);
    
    return 0;
}