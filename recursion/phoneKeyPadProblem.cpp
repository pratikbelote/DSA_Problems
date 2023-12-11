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

void possibleoutcomes(string digit,string output,int index,vector<string> &answer,string mapping[]){
    if(index>=digit.length()){
        answer.push_back(output);
        return;
    }
    
    int num = digit[index] - '0';
    string mappstring = mapping[num];
    
    for(int i=0;i<mappstring.length();i++){
        output.push_back(mappstring[i]);
        possibleoutcomes(digit,output,index+1,answer,mapping);
        output.pop_back();
    }
    
    
}

int main(){
    string str;
    cout<<"enter digits"<<endl;
    cin>>str;
    
    string output;
    vector<string> answer;
    int index=0;
    
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    possibleoutcomes(str,output,index,answer,mapping);
    
    print(answer);
    
    return 0;
}