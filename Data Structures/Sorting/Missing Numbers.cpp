#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,mx,mn;
    cin>>n1;
    vector<int> v(n1);
    mx=0; mn=INT_MAX;
    for(int i=0;i<n1;i++){
        cin>>v[i];
        mx=max(v[i],mx);
        mn=min(v[i],mn);
    }
    cin>>n2;
    vector<int> v2(n2);
    for(int i=0;i<n2;i++){
        cin>>v2[i];
        mx=max(v2[i],mx);
        mn=min(v2[i],mn);
    }
    vector<int> c(mx-mn+1);
    for(int a: v){
        c[a-mn]++;
    }
    for(int a:v2){
        c[a-mn]--;
    }
    for(int i=0;i<mx-mn+1;i++){
        if(c[i]<0)
          cout<<(i+mn)<<" ";
    }
    cout<<endl;
    return 0;
}