#include <bits/stdc++.h>
using namespace std;

void print(vector<string> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].length();j++){
        cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void subsequences(string str,string output,int index,vector<string> &answer){
    if (index>=str.length()){
        if(output.length()!=0)
        answer.push_back(output);
        return;
    }
    
    subsequences(str,output,index+1,answer);
    
    output.push_back(str[index]);
    
    subsequences(str,output,index+1,answer);
}

int main(){
    // int array[3] = {1,2,3};
    // int length = pow(2,3);
    // int answer[length];
    
    vector<string> answer;
    string output = "";
    string array = "abc";
    
    int index=0;
    
    subsequences(array, output, index, answer);
    cout<<"no error"<<endl;
    print(answer);
    
    return 0;
}