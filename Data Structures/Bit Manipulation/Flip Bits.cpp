#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,t,count;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=a^b;
        count=0;
        while(c != 0){
            if((c & 1) == 1)
              count++;
            c=(c>>1);
        }
        cout<<count<<endl;
    }
    return 0;
}
