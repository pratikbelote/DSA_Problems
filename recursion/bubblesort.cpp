#include <bits/stdc++.h>
using namespace std;

void print(int *array,int size){
    for(int i=0;i<(size);i++){
        cout<<array[i]<<endl;
    }
}
void bubblesort(int array[],int size){
    if(size==0)
        return ;
    
    for(int i=0;i<size-1;i++){
        if(array[i]>array[i+1])
            swap(array[i],array[i+1]);
    }
    bubblesort(array,size-1);
}

int main(){
    int array[6]={3,2,6,5,8,1};
    int size =sizeof(array)/sizeof(array[0]);
    bubblesort(array,size);
    print(array,size);
    return 0;
}