#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,q,x,l,r;
    cin>>n;
    vector<long int> v(n);
    for(long int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long int first=0, last=0;
    cin>>q;
    while(q--){
        cin>>x;
        l=0,r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid] >= x){
                first=mid;
                r=mid-1;
            }
            else
               l=mid+1;
        }
        l=0;r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid] <= x){
                last=mid;
                l=mid+1;
            }
            else
               r=mid-1;
        }
        if(v[first] != x || v[last] != x)
          cout<<0<<endl;
        else
        cout<<last-first+1<<endl;
    }

    return 0;
}