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
    int t,r,c;
    cin>>t;
    while(t--){
        cin>>r>>c;
        char ch[c];
        vector<vector<int>> v(r,vector<int>(c));
        for(int i=0;i<r;i++){
            cin>>ch;
            for(int j=0;j<c;j++){
                if(ch[j]=='1')
                   v[i][j]=1;
                else
                   v[i][j]=0;
            }
        }
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(v[i][j]==1){
                    count++;
                    dfs(v,i,j);
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}//