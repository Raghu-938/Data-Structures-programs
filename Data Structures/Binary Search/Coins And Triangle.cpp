#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        long int n=1;
        while(true){
            if(x >= n*(n+1)/2)
              n++;
            else
              break;
        }
        cout<<n-1<<endl;
    }

    return 0;
}