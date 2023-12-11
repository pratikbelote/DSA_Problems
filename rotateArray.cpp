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

void rotateArray(int array[],int size,int nor){
	nor = nor % size;
	for(int i=0;i<nor;i++){
		int temp = array[0];
		for(int j=0;j<size-1;j++){
			array[j]=array[j+1];
		}
		array[size-1]=temp;
		print(array,size);
	}
}

void rotatearray(int *array,int size,int nor){
	nor = nor%size;
	int newarray[size]={0};
	//int * newarray = array;
	
	for(int i =0;i<size;i++){
		newarray[i]=array[(i+nor)%size];
	}
	print(array,size);
}

int gcd1(int a,int b){
	if(b==0){
		return a;
	}
	return gcd1(b,a%b);
}
int gcd2(int a,int b){
	if(b==0)
	return a;
	if(a==0){
		return b;
	}
	if(a==b){
		return a;
	}
	if(a<b){
	    b=b-a;
	}
	else{
		a=a-b;
	}
	return gcd2(a,b);
}

void rotatearrayEffi(int array[],int size,int nor){
	nor=nor%size;
	int g_c_d = gcd2(size,nor);
	cout<<"gcd is - "<<g_c_d<<endl;
	for(int i=0;i<g_c_d;i++){
		int temp = array[i];
		int k=0;
		int j = i;
		for(;j+nor<size;j+=nor){
			array[j]=array[j+nor];
		}
		array[j] = temp;
	}
}

int main(){
	int array[]={1,2,3,4,5,6,7,8};
	
	int size = sizeof(array)/sizeof(array[0]);
	print (array,size);
	cout<<endl;
	int nor;
	cin>>nor;
	
	//rotateArray(array,size,nor);
	//rotatearray(array,size,nor);
	rotatearrayEffi(array,size,nor);
	
	print(array,size);

	return 0;
}

