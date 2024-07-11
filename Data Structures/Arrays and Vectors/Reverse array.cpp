#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<long int> v(n); 
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n/2;i++){
        swap(v[i],v[n-i-1]);
    }
    for(long int a:v)
      cout<<a<<" ";
    return 0;
}