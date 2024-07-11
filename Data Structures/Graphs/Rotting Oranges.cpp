#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>& v){
    queue<pair<int,int>> q;
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==2){
                q.push({i,j});
            }
        }
    }
    int count=-1;
    while(!q.empty()){
        int s=q.size();
        count++;
        for(int i=0;i<s;i++){
            auto top_pair=q.front();
            q.pop();
            int f=top_pair.first;
            int l=top_pair.second;
            if(l+1 < n && v[f][l+1]==1){
               v[f][l+1]=2;
               q.push({f,l+1});
            }
            if(l-1 >= 0 && v[f][l-1]==1){
               v[f][l-1]=2;
               q.push({f,l-1});
            }
            if(f+1 < n && v[f+1][l]==1){
               v[f+1][l]=2;
               q.push({f+1,l});
            }
            if(f-1 >= 0 && v[f-1][l]==1){
               v[f-1][l]=2;
               q.push({f-1,l});
            }
        }
    }
    if(count ==0)
      return -1;
    return count;
}


int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char ch[n];
        vector<vector<int>> v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            cin>>ch;
            for(int j=0;j<n;j++){
                if(ch[j]=='1')
                   v[i][j]=1;
                else if(ch[j]=='0')
                   v[i][j]=0;
                else
                v[i][j]=2;
            }
        }
        cout<<bfs(v)<<endl;
       
    }

    return 0;
}