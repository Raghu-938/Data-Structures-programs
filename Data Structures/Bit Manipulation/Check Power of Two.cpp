#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if((n & (n-1)) == 0)
          cout<<"True"<<endl;
        else
          cout<<"False"<<endl;
    }
    return 0;
}
