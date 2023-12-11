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

void combination(string str,string output,int index,vector<string> &answer){
    if(index>=str.length()){
        answer.push_back(output);
        return;
    }
    
    for(int i=0;i<str.length();i++){
        output.push_back(str[i]);
        combination(str,output,index+1,answer);
        output.pop_back();
    }
}


int main(){
    
    vector<string> answer;
    string array="abc";
    string output;
    int index =0;
    
    combination(array,output,index,answer);
    print(answer);
    
    return 0;
}