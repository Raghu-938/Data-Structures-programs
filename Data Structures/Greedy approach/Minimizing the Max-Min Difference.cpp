#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
      cin>>v[i];
    sort(v.begin(),v.end());
    int min_dif=INT_MAX;
    int maxi,mini,dif;
    for(int i=n-1;i>=0;i--){
        if(i==n-1)
          maxi=v[i-1];
        else{
            maxi=v[n-1];
        }
        
        if(i==0){
            mini=v[i+1];
        }
        else
           mini=v[0];   
       
        dif=maxi-mini;
        if(dif > 0)
         min_dif=min(min_dif,maxi-mini);
    }
    cout<<min_dif<<endl;
    return 0;
}
