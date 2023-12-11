#include<bits/stdc++.h>
using namespace std;

void merge(int *array,int start,int end){
    
    int mid = (start+end)/2;
    
    int length1=mid-start+1;
    int length2=end-mid;
    
    int *one = new int (length1);
    int *two = new int (length2);
    
    int arrayindex = start;
    
    for(int i=0;i<length1;i++){
        one[i]=array[arrayindex++];
    }
    
    // arrayindex = mid+1;
    for(int i=0;i<length2;i++){
        two[i]=array[arrayindex++];
    }
    
    int index1=0;
    int index2=0;
    arrayindex=start;
    
    while(index1<length1 && index2<length2){
        if(one[index1]<two[index2]){
            array[arrayindex++]=one[index1++];
        }
        else{
            array[arrayindex++]=two[index2++];
        }
        // else{
        //     array[arrayindex++]=one[index1++];
        //     array[arrayindex++]=two[index2++];
        // }
    }
    
    while(index1<length1){
        array[arrayindex++] = one[index1++];
    }
    
    while(index2<length2){
        array[arrayindex++] = two[index2++];
    }
    
    delete []one;
    delete []two;
}

// void merge(int *arr, int s, int e) {

//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }

//     mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }

//     //merge 2 sorted arrays     
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }   

//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;

// }

void mergesort(int *array,int start,int end){
    if(start >= end) {
        return;
    }
    
    int mid = (start+end)/2;

    //left part sort karna h 
    mergesort(array, start, mid);
    
    //right part sort karna h 
    mergesort(array, mid+1, end);

    //merge
    merge(array, start, end);
}

void print(int *array,int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    int array[11]={5,7,3,4,8,1,200,2,2,4,1};
    int size = sizeof(array)/sizeof(array[0]);
    print(array,size);
    cout<<"sorted array"<<endl<<endl;
    
    mergesort(array,0,size-1);
    
    print(array,size);
    
    return 0;
}