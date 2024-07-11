#include <bits/stdc++.h>
using namespace std;
//flipping
int main()
{
    long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(n ^ 4294967295)<<endl;
    }
    return 0;
}
