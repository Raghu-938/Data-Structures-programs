#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]<=v[i]){
                int t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }
    for(int a:v){
        cout<<a<<" ";
    }
    return 0;
}
