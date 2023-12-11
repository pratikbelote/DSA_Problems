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

int findhourofalarm(int speed[],int acceleration[],int size,int f,int al){
	int starth=0;
	int endh=0;
	int alarmtime=max(f,al);
	int sum=0;
	
	for(int i=0;i<size;i++){
		if((alarmtime-speed[i])%acceleration[i]==0){
			endh = max(endh,((alarmtime-speed[i])%acceleration[i]));
		}else{
			endh = max(endh,((alarmtime-speed[i])%acceleration[i])+1);
		}
	}
	
	while(starth<=endh){
		cout<<"hi"<<endl;
		
		int mid=(starth+endh)/2;
		sum = 0;
		
		for(int i=0;i<size;i++){
			if(speed[i]+acceleration[i]*mid>f){
				sum+=(speed[i]+acceleration[i]*mid);
			}
		}
		if(sum>=alarmtime){
			endh=mid-1;
		}else{
			starth=mid+1;
		}
	}
	return starth;
}

int main(){
//	int speed[]={3,4,5,6,7};
//	int acceleration[]={4,3,5,6,2};
	int f = 120, al = 60;
    int speed[] = { 50, 30 };
    int acceleration[] = { 20, 40 };
//	int al; //alarm limit
//	int f; //faster limit
	
	int size=sizeof(speed)/sizeof(speed[0]);
	
	int hour = findhourofalarm(speed,acceleration,size,f,al);
	cout<<"minimum hours are - "<<hour<<endl;

	return 0;
}

