#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n,t,res,i;
    cin>>t;
    while(t--){
        cin>>n;
        res=0;
        for(i=0;i<31;i++){
            if((n&1) ==1){
                res=(res|1);
            }
            res=(res<<1);
            n=n>>1;
        }
        cout<<res<<"\n";
    }
    return 0;
}
