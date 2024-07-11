#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    long int sum=0;
    cin>>n;
    vector<long int> v(n); 
    for(i=0;i<n;i++){
        cin>>v[i];
        if((v[i]%2)!=0)
          sum=sum+v[i];
    }
    cout<<sum<<endl;
    return 0;
}