#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,r,a,b;
    for(int i=1;i<=t;i++){
        cin>>n>>r;
        bool flag=true;
        unordered_map<int,unordered_set<int>> mp;
        int j=1;
        unordered_set<int> s;
       // bool flag=true;
        while(r--){
            cin>>a>>b;
            if(mp[a].find(b) != mp[a].end()){
                flag=false;
            }
            mp[a].insert(b);
        }
        if(flag){
            cout<<"Scenario #"<<i<<": possible"<<endl;
        }
        else
            cout<<"Scenario #"<<i<<": impossible"<<endl;
    }
    return 0;
}