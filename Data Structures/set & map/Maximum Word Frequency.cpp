#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        mp[str]++;
    }
    int max=0;
    for(auto p: mp){
        if(p.second >= max){
            max=p.second;
            str=p.first;
        }
    }
    cout<<str<<" "<<max<<endl;
    return 0;
}
