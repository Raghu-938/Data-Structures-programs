#include <bits/stdc++.h>
using namespace std;

int dfs(int so_row ,int so_col,int des_row,int des_col,map<char,int>& mp,vector<pair<int,int>>& v){
    if((so_row<1 || so_row>8) || (so_col<1 || so_col > 8) || (des_row<1||des_row>8) || (des_col<1||des_col > 8))
       return INT_MAX;
    if(so_row == des_row && so_col == des_col)
       return 0;
    int ans=INT_MAX;
        for(auto a : v){
            int row=a.first;
            int col=a.second;
            ans=min(ans,1+dfs(so_row+row,so_col+col,des_row,des_col,mp,v));
        }
    return ans;
}

int bfs(int so_row ,int so_col,int des_row,int des_col,map<char,int>& mp,vector<pair<int,int>>& v){
    queue<pair<int,int>> q;
    q.push({so_row,so_col});
    set<pair<int,int>> visited;
    visited.insert(q.front());
    int count=0;
    while(!q.empty()){
        count++;
        int s=q.size();
        for(int i=0;i<s;i++){
            auto p=q.front();
            q.pop();
            int f=p.first;
            int s=p.second;
            if(f==des_row && s==des_col){
               return count-1;
            }
            for(auto a:v){
                if(f+a.first >=1 && f+a.first <=8 && s+a.second >=1 && s+a.second <=8 && visited.find({f+a.first,s+a.second})==visited.end())
                   q.push({f+a.first,s+a.second});
                   visited.insert({f+a.first,s+a.second});
            }
        }
    }
    return count-1;
    
}


int main()
{
    int t,n;
    cin>>t;
    while(t--){
        char ch[2],ch1[2];
        cin>>ch>>ch1;
        map<char,int> mp;
        for(int i=0;i<8;i++){
            mp['a'+i]=i+1;
        }
        int s_c=ch[1]-'0';
        int d_c=ch1[1]-'0';
        vector<pair<int,int>> v={{-1,2},{1,2},{-1,-2},{1,-2},{2,-1},{2,1},{-2,-1},{-2,1}};
       cout<< bfs(mp[ch[0]],s_c,mp[ch1[0]],d_c,mp,v)<<endl;
    }

    return 0;
}