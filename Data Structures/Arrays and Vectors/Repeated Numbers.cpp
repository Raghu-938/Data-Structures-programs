#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n),a;
        for(int i=0;i<n;i++){
            cin>>v[i];
            for(int j=0;j<i;j++){
                if(v[j]==v[i])
                  a.push_back(v[i]);
            }
        }
        if(a[0]<a[1])
          cout<<a[0]<<" "<<a[1]<<endl;
        else
          cout<<a[1]<<" "<<a[0]<<endl;
    }
    return 0;
}