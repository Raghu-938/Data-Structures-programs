#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,base,ex,res;
    cin>>t;
    while(t--){
        cin>>base>>ex;
        res=1;
        while(ex != 0){
            if((ex&1)==1)
              res=(res*base)%1000000007;
            base=(base*base)%1000000007;
            ex=(ex>>1);
        }
        cout<<res<<endl;
    }
    return 0;
}