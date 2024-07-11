#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k,i,j,r1,r2,c1,c2;
    cin>>t;
    while(t--){
        cin>>r1>>c1;
        vector<vector<int>> a(r1,vector<int>(c1));
        for(i=0;i<r1;i++){
            vector<int> temp(c1);
            for(j=0;j<c1;j++){
                cin>>temp[j];
            }
            a[i]=temp;
        }
        cin>>r2>>c2;
        vector<vector<int>> b(r2,vector<int>(c2));
        for(i=0;i<r2;i++){
            vector<int> temp(c2);
            for(j=0;j<c2;j++){
                cin>>temp[j];
            }
            b[i]=temp;
        }
        vector<vector<int>> c(r1,vector<int>(c2));
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(k=0;k<c1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}