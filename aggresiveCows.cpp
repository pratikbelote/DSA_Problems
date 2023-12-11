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

bool ispossible(int array[],int size,int cows,int mid){
	int cow=1;
	int lastposi = array[0];
	for(int i=0;i<size;i++){
		if((array[i]-lastposi)>=mid){
			cow+=1;
			if(cow==cows){
				return true;
			}
			lastposi=array[i];
		}
	}
	return false;
}

int findmaxdistance(int array[],int size,int cows){
	int start=0;
	int maxi=-1;
	int mini=array[size-1];
	int answer=0;
	for(int i=0;i<size;i++){
		maxi =max(maxi,array[i]);
		mini=min(mini,array[i]);
	}
	int end=maxi-mini;
	while(start<=end){
		int mid=(start+(end-start)/2);
		if(ispossible(array,size,cows,mid)){
			answer=mid;
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return answer;
}

int main(){
	int stalls[]={3,4,5,6,8,9};
	int size=sizeof(stalls)/sizeof(stalls[0]);
	int cows;
	cin>>cows;
	int num=findmaxdistance(stalls,size,cows);
	if(num==-1){
		cout<<"cant place these cows int stalls"<<endl;
	}else{
		cout<<"cows are placed at distance - "<<num<<endl;
	}
	return 0;
}

