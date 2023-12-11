#include<bits/stdc++.h>
using namespace std;

void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i];
    }
    cout<<endl;
}

void findIntersection(int array[],int array1[],int size,int size1){
    int answer[80];
    //int x=0;
    int y=0;
    
    for(int i=0;i<size ;i++){
        for(int j=0;j<size1;j++){
            if(array[i]==array1[j]){
                cout<<array[i]<<" ";
                array1[j]=INT_MIN;
                break;
            }
        }
    }
    cout<<endl;
}
//for sorted arrays

void findintersection(int array[],int arrray1[],int size,int size1){
    int i=0;
    int j=0;
    while(i<size && j<size1){
        if(array[i]<array1[j]){
            break;
        }else if(array[i]==array1[j]){
            cout<<array[i];
            i++,j++;
        }else{
            j++;
        }
    }
    cout<<endl;
}

int main(){
    int array1[7] = {4,6,3,4,2,2,2};
    int array[12]= {1,2,1,3,4,4,4,5,6,6,6,2};
    
    int size = sizeof(array)/sizeof(array[0]);
    int size1 = sizeof(array1)/sizeof(array1[0]);
    
    findIntersection(array,array1,size,size1);
    
    return 0;
}