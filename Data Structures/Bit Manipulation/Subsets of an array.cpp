#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       vector<int> v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       sort(v.begin(),v.end());
       int len=pow(2,n);
       vector<vector<int>> subset(len);
       for(int i=1;i<len;i++){
           vector<int> temp;
           for(int j=0;j<n;j++){
               if(i & (1<<j))
                  temp.push_back(v[j]);
           }
           subset[i-1]=temp;
       }
       sort(subset.begin(),subset.end());
       int j=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<len;j++){
               if(!subset[j].empty() && subset[j][0] == v[i]){
                   for(int k=0;k<subset[j].size();k++){
                       cout<<subset[j][k]<<" ";
                   }
                   cout<<endl;
               }
           }
       }
       cout<<endl;
   }

    return 0;
}