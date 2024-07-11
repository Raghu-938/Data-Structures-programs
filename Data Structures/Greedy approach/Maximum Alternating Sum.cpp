#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       sort(v.begin(),v.end());
       long long int sum=0;
       for(int i=0;i<n/2;i++){
             sum+=v[n-1-i]-v[i];
       }
       if(n%2 ==1 )
         sum+=v[n/2];
       cout<<sum<<endl;
   }
    return 0;
}