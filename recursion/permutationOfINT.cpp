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

void permutation(string str,string output,int index,vector<string> &answer){
    if(index==str.length()-1){
        answer.push_back(output);
        return;
    }
    for(int i=index;i<str.length();i++){
        swap(output[index],output[i]);
        permutation(str,output,index+1,answer);
    }
    
}


int main(){
    
    vector<string> answer;
    string array="abc";
    string output = array;
    int index =0;
    
    permutation(array,output,index,answer);
    print(answer);
    
    return 0;
}

/*
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

void printint(vector<vector<int>> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].size();j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
}

void permutation(vector<int> str,int index,vector<vector<int>> &answer){
    if(index==str.size()-1){
        answer.push_back(str);
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[index],str[i]);
        permutation(str,index+1,answer);
        swap(str[index],str[i]);
    }
}


int main(){
    vector<vector<int>> answer;
    vector<int> array{1,2,3};
    //vector<int> output = array;
    int index =0;
    
    permutation(array,index,answer);
    printint(answer);
    
    return 0;
}
*/