#include <bits/stdc++.h>
using namespace std;

bool sorted(pair<int,int>& a , pair<int,int>& b){
    return a.second < b.second;
}

int main()
{
    int t,n,s,end;
    cin>>t;
    while(t--){
        int count=1;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            cin>>s>>end;
            v.push_back({s,end});
        }
        
        sort(v.begin(),v.end(),sorted);
        // for(int i=0;i<n;i++){
        //     cout<<v[i].first<<" "<<v[i].second<<endl;
        // }
        int end_time=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first >= end_time){
                count++;
                end_time=v[i].second;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
