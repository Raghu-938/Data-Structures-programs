#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,k=1;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<long int>> v(n,vector<long int>(n)) ;
        for(int i=0;i<n;i++){
            vector<long int> temp(n);
            for(int j=0;j<n;j++){
                cin>>temp[j];
            }
            v[i]=temp;
        }
        cout<<"Test Case #"<<k++<<":"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[n-1-j][i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}