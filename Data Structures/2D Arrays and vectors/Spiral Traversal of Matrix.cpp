#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,j,rf,rl,cf,cl;
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>> v(n,vector<int>(n));
        for(i=0;i<n;i++){
            vector<int> temp(n);
            for(j=0;j<n;j++){
                cin>>temp[j];
            }
            v[i]=temp;
        }
        rf=0;
        cf=n-1;
        rl=n-1;
        cl=0;
        k=0;
        while(k<n){
            for(i=cl;i<=cf;i++){
                cout<<v[rf][i]<<" ";
            }
            for(i=rf+1;i<=rl;i++){
                cout<<v[i][cf]<<" ";
            }
            for(i=cf-1;i>=cl;i--){
                cout<<v[rl][i]<<" ";
            }
            for(i=rl-1;i>rf;i--){
                cout<<v[i][cl]<<" ";
            }
            rf++;
            cf--;
            rl--;
            cl++;
            k++;
        }
        cout<<endl;
    }
    return 0;
}