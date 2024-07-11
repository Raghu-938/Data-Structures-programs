#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=n-1;i>0;i--){
            temp=i;
            for(int j=i-1;j>=0;j--){
                if(v[j] >= v[temp])
                  temp=j;
            }
            cout<<temp<<" ";
            swap(v[i],v[temp]);
        }
        cout<<endl;
    }
    return 0;
}
//