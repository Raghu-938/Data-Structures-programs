#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,t,rem,l,r;
    cin>>n>>t;
    rem=240-t;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=(i+1)*5;
        if(i!=0)
          v[i]+=v[i-1];
    }
    l=0; r=n-1;t=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(v[mid]==rem){
            t=mid;
            break;
        }
        else if(rem > v[mid])
          l=mid+1;
        else
          r=mid-1;
    }
    if(t== -1)
      cout<<l<<endl;
    else
      cout<<t+1<<endl;
    return 0;
}