#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,a;
    cin>>t;
    while(t--){
        cin>>n>>k;
        unordered_set<int> s;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a;
            if(s.find(a-k) != s.end() || s.find(a+k)!=s.end()){
                flag=true;
            }
            else
              s.insert(a);
        }
        if(flag)
           cout<<"true\n";
        else
           cout<<"false\n";
    }
    return 0;
}
