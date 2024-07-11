#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum,mx;
    cin>>t;
    while(t--){
        cin>>n;
        mx=INT_MIN;
        vector<int> v(n);
        sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum=sum^v[i];
            mx=max(v[i],mx);
        }
        for(int i=1;i<=mx;i++)
           sum=sum^i;
        int bit=sum & (~(sum-1));
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(bit & v[i])
              x=x^v[i];
            else
              y=y^v[i];
        }
        for(int i=1;i<=mx;i++){
            if(bit & i)
              x=x^i;
            else
              y=y^i;
        }
        if(x<y)
          cout<<x<<" "<<y<<endl;
        else
          cout<<y<<" "<<x<<endl;
    }

    return 0;
}