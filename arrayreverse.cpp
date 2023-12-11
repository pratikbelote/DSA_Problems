#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include<algorithm>

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

void inputarray(int *array,int size){
	for(int i =0;i<size;i++){
		int e;
		cin>>e;
		array[i]=e;
	}
}

int main()
{
	cout <<"enter array size number"<<endl;
	int m;
	cin>>m;
	int arr[m];
	inputarray(arr,m);
	
	int n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);
	
	rvereseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	printArray(arr, n);
	
	return 0;
}
