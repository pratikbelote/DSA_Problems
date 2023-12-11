void sort012(int nums[], int n)
    {
        // coode here
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++,mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
#include<bits/stdc++.h>
using namespace std;

void print(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i];
    }
    cout<<endl;
}

void sort012(int array[],int size){
    int start=0;
    int middle=0;
    int end=size-1;
    
    while(middle<end){
        print(array,size);
        while(array[end]==2){
            end--;
        }
        while(array[middle]<2){
            middle++;
        }
        if(middle<end && array[middle]==2 && array[end]<2)
            swap(array[middle],array[end]);
        
    }
    middle--;
    cout<<endl;
    while(start<middle){
    print(array,size);
        while(array[start]==0){
            start++;
        }
        while(array[middle]==1){
            middle--;
        }
        if(start<middle){
            swap(array[start],array[middle]);
        }
    }
}

int main(){
    int array1[7] = {4,6,3,4,2,2,2};
    int array[12]= {2,2,1,1,2,2,1,1,0,0,0};
    
    int size = sizeof(array)/sizeof(array[0]);
    int size1 = sizeof(array1)/sizeof(array1[0]);
    
    sort012(array,size);
    print(array,size);
    
    return 0;
}