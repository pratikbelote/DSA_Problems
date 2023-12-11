#include<bits/stdc++.h>
using namespace std;

int main (){
    
    int i = 4;
    cin>>i;
    cout<<endl;
    
    int *array = new int [i];
    int arr[i];
    
    fill_n(array,i,-1);
    fill(arr,arr+i,8);
    
    cout<<arr[i-1]<<endl;
    cout<<array[i-1];
    cout<<endl;
    
    //error handling
    
    // try{
    //     string a = "aa";
    //     cout<<"before throw"<<endl;
    //     throw a;
    //     cout<<"after throw"<<endl;
    // }catch(char ii){
    //     cout<<"error was at char"<<endl;
    // }catch(int iii){
    //     cout<<"error was at iii"<<endl;
    // }catch(...){
    //     cout<<"default error"<<endl;
    // }
    
    return 0;
}