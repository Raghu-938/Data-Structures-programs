#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        int b;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            b=0;
            for(int j=0;j<i;j++){
                if(v[i]==v[j]){
                   b=1; 
                  break;
                }
            }
            if(b==0){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}