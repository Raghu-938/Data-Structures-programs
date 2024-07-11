#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,max;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    max=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>max)
           max=v[i];
    }
    cout<<max<<endl;
    return 0;
}