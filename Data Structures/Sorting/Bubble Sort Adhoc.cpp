#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,count;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        count=0;
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i;j--){
                if(v[j] < v[j-1]){
                    swap(v[j],v[j-1]);
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}