#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,sum,a;
    cin>>r>>c;
    for(int i=0;i<r;i++){
       sum=0;
        for(int j=0;j<c;j++){
            cin>>a;
            sum+=a;
        }
        cout<<sum<<endl;
    }
    return 0;
}   