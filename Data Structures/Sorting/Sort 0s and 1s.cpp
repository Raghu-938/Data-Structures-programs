#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,start,end;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        start=0; end=n-1;
        while(start<end){
            if(!v[start]){
                start++;
            }
            else if(v[start] && !v[end]){
                swap(v[start],v[end]);
                start++;
                end--;
            }
            else
              end--;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}