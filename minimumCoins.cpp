#include<bits/stdc++.h>
#include<vector>
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

int minimumElements(vector<int> &num, int x)
{    
    if(x==0){
        return -1;
    }
    sort(num.begin(),num.end());
    int count=0;
    for(int i=0;i<num.size();i++){
        int j = num.size()-1-i;
        count+=x/num[j];
        x=x%num[j];
        if(x==0){
            return count;
        }
    }
    if(x!=0){
        
    }
    return count;
}

int main(){
	vector<int> vect ;
	for(int i=0;i<3;i++){
		vect[i]=i+1;
		cout<<i+1;
	}
	int x;
	cin>>x;
	int answer = minimumElements(vect,x);
	cout << answer<<endl;

	return 0;
}

