#include <bits/stdc++.h>
using namespace std;

bool ispossiblesolution(int array[],int size,int nos,int mid){
    int student=1;
    int sum=array[0];
    for(int i=1;i<size;i++){
        if(sum+array[i]>mid){
            sum = array[i];
            student++;
            if(student>nos){
                return false;
            }
        }else{
            sum+=array[i];
        }
    }
    return true;
}

int maxbooksallocated(int array[],int size,int nos){
    int start=0;
    int end=0;
    int ans=-1;
    for(int i=0;i<size;i++){
        end+=array[i];
    }
    int mid=(start+end)/2;
    while(start<=end){
        if(ispossiblesolution(array,size,nos,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int array[4] = {5, 17, 100, 11};
    int size = sizeof(array)/sizeof(array[0]);
    int numberofstudent = 4;

    int ans = maxbooksallocated(array,size,numberofstudent);
    cout<<ans<<endl;
    return 0;
}