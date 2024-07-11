#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
    for(auto p: mp){
        sum=sum+(p.second/2);
    }
    cout<<sum<<endl;
    return 0;
}
