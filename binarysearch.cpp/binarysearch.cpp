#include <bits/stdc++.h>
using namespace std;

bool issorted(int arr[],int size){
    if(size == 0 || size ==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }else{
        return issorted(arr+1,size-1);
    }
}
int sum(int *arr,int index){
    if(index<0){
        return 0;
    }
    
    return arr[index] +sum(arr,index-1);
}
bool search(int arr[],int size,int key){
    if(size<0){
        return false;
    }
    if(key==arr[0]){
        return true;
    }
    return search(arr+1,size-1,key);
}

bool binarysearch(int *arr,int start,int end,int key){
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return true;
    }
    if(start>=end)
        return false;
    if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }else {
        return binarysearch(arr,start,mid-1,key);
    }
    //if(mid>key)
}

int main(){
    int array[5]={3,5,5,5,9};
    int size =sizeof(array)/sizeof(array[0]);
    
    // if(issorted(array,size)){
    //     cout<<"array is sorted"<<endl;
    // }else{
    //     cout<<"array is not sorted"<<endl;
    // }
    // cout<<sum(array,size-1)<<endl;
    // cout<<search(array,size-1,4);
    cout<<binarysearch(array,0,size-1,9)<<endl;
    return 0;
}