#include <bits/stdc++.h>
using namespace std;

void powerset(vector<int> arr, vector<int> output, int index, vector<vector<int>> &answer){
    if(index>=arr.size()){
        answer.push_back(output);
        return;
    }
    
    powerset(arr,output,index+1,answer);
    
    output.push_back(arr[index]);
    powerset(arr,output,index+1,answer);
}

void print(vector<vector<int>> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].size();j++){
        cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    // int array[3] = {1,2,3};
    // int length = pow(2,3);
    // int answer[length];
    
    vector<vector<int>> answer;
    vector<int> output;
    vector<int> array{1,2,3};
    
    int index=0;
    
    powerset(array, output, index, answer);
    cout<<"no error"<<endl;
    print(answer);
    
    return 0;
}