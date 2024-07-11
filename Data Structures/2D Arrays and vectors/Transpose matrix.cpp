#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    vector<vector<long int>> v(r,vector<long int>(c)) ;
    for(int i=0;i<r;i++){
        vector<long int> temp(c);
        for(int j=0;j<c;j++){
            cin>>temp[j];
        }
        v[i]=temp;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}