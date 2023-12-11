#include <iostream>
#include <limits.h>
using namespace std;

void print(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void inputarray(int *arr,int size){
	for(int i=0;i<size;i++){
		int m;
		cin>>m;
		arr[i]=m;
	}
}

int maxFromArray(int *arr,int size){
	
	int max=INT_MAX;
	for(int i=1;i<size;i++){
		if(arr[i-1]<arr[i]){
			max=arr[i];
		}else{
			max=arr[i-1];
		}
	}
	return max;
}

int main(){
	cout<<"enter size of array"<<endl;
	
	int m;
	cin>>m;
	int arr[m];
	
	inputarray(arr,m);
	print(arr,m);
	int max=maxFromArray(arr,m);
	cout<<max;
	
	return 0;
}
