#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,j,sum;
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
        k=n-1;
        while(k>=0){
            j=k;
            sum=0;
            for(i=0;i<n-k;i++){
                sum+=v[i][j];
                j++;
            }
            cout<<sum<<" ";
            k--;
        }
        k=1;
        while(k<n){
            i=k;
            sum=0;
            for(j=0;j<n-k;j++){
                sum+=v[i][j];
                i++;
            }
            cout<<sum<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}