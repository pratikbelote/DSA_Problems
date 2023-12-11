#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].size();j++){
        cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printt(vector<string> array){
    for(int i=0;i<array.size();i++){
        for(int j=0;j<array[i].length();j++){
        cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool issafe(int x, int y,vector<vector<int>> visited,vector<vector<int>> maze,int n){
    if(x>=0 && x<n && y <n && y >=0 && visited[x][y] == 0 && maze[x][y]==1){
        return true;
    }else{
        return false;
    }
}

void solve(vector<vector<int>> maze,int n,vector<string> &answer,string path,vector<vector<int>> visited,int x,int y){
    if(x==n-1 && y==n-1){
        answer.push_back(path);
        return;
    }
    
    visited[x][y]=1;
    
    //down
    if(issafe(x+1,y,visited,maze,n)){
        path.push_back('D');
        solve(maze,n,answer,path,visited,x+1,y);
        path.pop_back();
    }
    
    //up
    if(issafe(x-1,y,visited,maze,n)){
        path.push_back('U');
        solve(maze,n,answer,path,visited,x-1,y);
        path.pop_back();
    }
    
    //left
    if(issafe(x,y-1,visited,maze,n)){
        path.push_back('L');
        solve(maze,n,answer,path,visited,x,y-1);
        path.pop_back();
    }
    
    //right
    if(issafe(x,y+1,visited,maze,n)){
        path.push_back('R');
        solve(maze,n,answer,path,visited,x,y+1);
        path.pop_back();
    }
    visited[x][y]=0;
}


int main(){
    
    vector<vector<int>> maze ={{1,0,1,0,1,0},
                               {1,0,1,1,1,1},
                               {1,0,1,0,1,1},
                               {1,0,1,0,1,1},
                               {1,1,1,0,1,1},
                               {1,0,1,0,1,1}};
    
    vector<vector<int>> visited = maze;
    
    for(int i=0;i<maze.size();i++){
        for(int j=0;j<maze.size();j++){
            visited[i][j]=0;
        }
    }
    
    vector<string> answer;
    string path = "";
    
    int n = maze.size();
    
    int x = 0;
    int y = 0;
    
    // if(maze[x][y]==0)
    //     return answer;
    
    // cout<<maze[x][y]<<endl;
    // cout<<maze[x+1][y]<<endl;
    // cout<<maze[x][y+1]<<endl;
    // cout<<maze[x][y]<<endl;
    
    solve(maze, n, answer, path, visited, x, y);
    
    printt(answer);
    
    return 0;
}