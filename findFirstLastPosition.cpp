#include<bits/stdc++.h>
using namespace std;

void printarray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<' ';
	}
	cout<<endl;
}

pair<int,int> getFirstLastPosition(int array[],int key,int start,int end){
	pair<int,int> i(2,3);
	//i =make_pair(5,6);
	
	int mid = (start + end)/2;
	while(start<end){
		if(array[mid] == key){
			while(array[mid-1]==key){
				mid--;
			}
			i.first = mid;
			while(array[mid+1]==key){
				mid++;
			}
			i.second = mid;
			return i;
		}else if(key<array[mid]){
			end =  mid-1;
		}else{
			start = mid+1;
		}
		mid = (start+end)/2;
	}
	
	return make_pair(-1,-1);
}

int main(){
	int array[10]={3,2,4,3,2,2,5,5,6,6};
	int size=sizeof(array)/sizeof(array[0]);
	
	sort(array,array+size);
	printarray(array,size);
	
	pair<int,int> i = getFirstLastPosition(array,9,0,size-1);
	cout<<i.first<<endl;
	cout<<i.second<<endl;
	
	return 0;
}
