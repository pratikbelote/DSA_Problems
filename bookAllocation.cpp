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

bool ispossible(int nos,int array[],int size,int mid){
	int studentcount = 1;
	int currentsum = 0;
	for (int i=0;i<size;i++){
		
		if(array[i]>mid){
			return false;
		}
		if(currentsum+array[i]>mid){
			currentsum=array[i];
			studentcount++;
			
			if(studentcount>nos){
				return false;
			}
		}else{
			currentsum +=array[i];
		}
		
	}
	return true;
}

int allocatebooks(int array[],int size,int nos){
	if(nos > size)
		return -1;
		
	int sum=0;
	for(int i=0;i<size-1;i++){
	//for(int i=0;i<size;i++){
		sum+=array[i];
	}
	int start=array[0];
	
	//int start=0;
	int end=sum;
	
	int answer = INT_MAX;
	int mid=(start+end)/2;
	
	while(start<=end){
		if(ispossible(nos,array,size,mid)){
			answer = mid;
			end = mid-1;
		}else{
			start = mid+1;
		}
		mid=(start+end)/2;
	}
	return answer;
}

int main(){
	int array[] = {10,20,30,40,50};
	int size = sizeof(array)/sizeof(array[0]);
	int nos;
	cin >>nos;
	
	int num = allocatebooks(array,size,nos);
	if(num==-1){
		cout<<"we can't assign books"<<endl;
	}
	else{
		cout<<"minimum number of pages allocated are - "<<num<<endl;
	}
	return 0;
}

