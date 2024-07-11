#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;
unordered_map<int,int> ind;
bool comp(int a,int b){
    if(mp[a] != mp[b]){
       return mp[a] > mp[b];
    }
    else
        return ind[a]<ind[b];
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
        if(ind.find(v[i]) == ind.end())
           ind[v[i]]=i;
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
