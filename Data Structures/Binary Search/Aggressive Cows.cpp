#include <bits/stdc++.h>
using namespace std;

bool place(vector<int>& v,int pos,int c){
    int last=v[0],count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]-last >= pos){
            last=v[i];
            count++;
        }
    }
    return (count >= c);
}

int main()
{
    int t,n,c,mx,mn;
    cin>>t;
    while(t--){
        cin>>n>>c;
        int ans=-1;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int l=1,r=(v[n-1]-v[0]);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(place(v,mid,c)){
                ans=mid;
                l=mid+1;
            }
            else{
               r=mid-1;
            }
            
        }
        cout<<ans<<endl;
    }

    return 0;
}