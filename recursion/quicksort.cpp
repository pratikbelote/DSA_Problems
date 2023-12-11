#include<bits/stdc++.h>
using namespace std;

int partition(int *arr,int start,int end){
    int pivot = arr[start];
    
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(pivot>arr[i]){
            count++;
        }
    }
    int pivotindex = start+count;
    swap(arr[start],arr[pivotindex]);
    
    int i=start;
    int j=end;
    
    while(i<pivotindex && j>pivotindex){
        
        while(arr[i]<arr[pivotindex]){
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        
        //if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
    }
    return pivotindex;
}

void quicksort(int *arr,int start,int end){
    if(start>=end)
        return ;
    
    int pivot = partition(arr,start,end);
    
    quicksort(arr,start,pivot-1);
    
    quicksort(arr,pivot+1,end);
    
}

void print(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array[11]={5,7,3,4,8,1,200,2,2,4,1};
    int size = sizeof(array)/sizeof(array[0]);
    print(array,size);
   
    quicksort(array,0,size-1);
    
    print(array,size);
    
    return 0;
}