#include <iostream>
#include<map>

using namespace std;

int main()
{
    int n1,n2,a;
    cin>>n1;
   map<int,int> mp;
    for(int i=0;i<n1;i++){
        cin>>a;
        mp[a]++;
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>a;
        mp[a]--;
    }
    for(auto p: mp){
        if(p.second < 0)
          cout<<p.first<<" ";
    }
    cout<<endl;
    return 0;
}
