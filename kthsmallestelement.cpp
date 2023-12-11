#include <bits/stdc++.h>
using namespace std;

int kthelement(int arr[],int size,int k){
	
    sort(arr, arr + size);
    return arr[k-1];
}
 
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
 
    cout << "\nArray after sorting using "
            "default sort is : \n";
    int m =kthelement(arr,n,2);
	cout<<m<<endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}


    int kthSmallest(int a[], int l, int r, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
       for(int i=l;i<=r;i++)
       q.push(a[i]);
       for(int i=l;i<k-1;i++)
       q.pop();
       return q.top();
    }

