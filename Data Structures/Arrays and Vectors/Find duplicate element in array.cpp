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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j])
              cout<<v[i]<<endl;
        }
    }
    return 0;
}