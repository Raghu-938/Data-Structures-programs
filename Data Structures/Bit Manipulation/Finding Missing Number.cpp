#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++){
            cin>>a;
            sum=sum^a^i;
        }
        cout<<(sum^(n+1))<<endl;
    }
    return 0;
}
