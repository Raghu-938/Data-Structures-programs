#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long int a,sum=0;
        for(int i=0;i<n;i++){
            cin>>a;
            sum=sum+a;
        }
        cout<<sum<<endl;
    }
    return 0;
}