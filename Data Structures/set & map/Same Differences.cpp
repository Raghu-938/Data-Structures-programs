#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    long long t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        long long count=0;
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++){
            cin>>a;
            count=count+mp[a-i];
            mp[a-i]++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}