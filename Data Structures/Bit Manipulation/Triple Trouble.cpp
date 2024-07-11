#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,one,two;
   cin>>t;
   while(t--){
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       one=0; two=0;
       int common;
       for(int i=0;i<n;i++){
           two=two | (v[i] & one);
           one=one ^ v[i];
           common=one & two;
           one=(one & (~(common)));
           two=(two & (~(common)));
       }
       cout<<one<<endl;
   }

    return 0;
}