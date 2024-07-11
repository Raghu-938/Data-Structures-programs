#include <iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<char>>& v,int row,int col){
    if(row<0 || row>=v.size() || col <0 || col>=v[0].size() || v[row][col]=='*')
        return;
    if(v[row][col]=='@'){
        v[row][col]='*';
        dfs(v,row,col+1);
        dfs(v,row,col-1);
        dfs(v,row+1,col);
        dfs(v,row-1,col);
        dfs(v,row-1,col-1);
        dfs(v,row-1,col+1);
        dfs(v,row+1,col-1);
        dfs(v,row+1,col+1);
        
    }
}

int main()
{
    int m,n;
    while(true){
        cin>>m>>n;
        if(m==0 || n==0)
           break;
        vector<vector<char>> v(m,vector<char>(n));
        char ch[n];
        for(int i=0;i<m;i++){
            cin>>ch;
            for(int j=0;j<n;j++){
                v[i][j]=ch[j];
            }
        }
        //  for(int i=0;i<m;i++){
        //      for(int j=0;j<n;j++){
        //          cout<<v[i][j]<<" ";
        //      }
        //      cout<<endl;
        //  }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='@'){
                    count++;
                    dfs(v,i,j);
                }
            }
            
        }
        cout<<count<<endl;
        
    }
    return 0;
}