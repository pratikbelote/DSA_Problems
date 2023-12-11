#include<bits/stdc++.h>
using namespace std;

void printstring(string str,int size){
	 for(int i=0;i<size;i++){
	     cout<<str[i]<<' ';
	 }
	 cout<<endl;
 }

void print(int array[],int size){
	 for(int i=0;i<size;i++){
	      cout<<array[i]<<' ';
	 }
	 cout<<endl;
}

bool ispossible(int array[],int size,int painters,int mid){
	int painter =1;
	int csum=0;
	for(int i=0;i<size;i++){
		if(array[i]>mid){
			return false;
		}
		if(array[i]+csum>mid){
			csum=array[i];
			painter+=1;
			if(painter>painters){
				return false;
			}
		}else{
			csum+=array[i];
		}
	}
	return true;
}

int findlargestminlength(int array[],int size,int painters){
	int start=0;
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=array[i];
	}
	int end=sum;
	int answer = INT_MAX;
	
	while(start<=end){
		int mid=(start+(end-start)/2);
		if(ispossible(array,size,painters,mid)){
			answer = mid;
			end = mid-1;
		}else{
			start=mid+1;
		}
	}
	return answer;
}

int main(){
	//int array[]={3,5,2,7,3,7,4,8};
	int array[]={30,40,50,60,70};
	int size = sizeof(array)/sizeof(array[0]);
	int painters;
	cin>>painters;
	int num =findlargestminlength(array,size,painters);
	if(num==-1){
		cout<<"we canot assign walls to them"<<endl;
	}else{
		cout<<"largest minimum length is - "<<num<<endl;
	}
	return 0;
}

