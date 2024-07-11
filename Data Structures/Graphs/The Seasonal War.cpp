#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& v,int row,int col){
    if(row>=0 && row<v.size() && col>=0 && col<v[0].size()){
        if(v[row][col]==1){
            v[row][col]=0;
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
}

int main()
{
    int t,n,temp=0;
    while(cin>>n){
        //cin>>n;
        char ch[n];
        temp++;
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            cin>>ch;
            for(int j=0;j<n;j++){
                if(ch[j]=='1')
                   v[i][j]=1;
                else
                   v[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==1){
                    count++;
                    dfs(v,i,j);
                }
            }
        }
        cout<<"Image number "<<temp<<" contains "<<count<<" war eagles."<<endl;
    }

    return 0;
}