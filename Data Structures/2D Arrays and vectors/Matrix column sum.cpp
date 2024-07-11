#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,sum;
    cin>>r>>c;
    vector<vector<int>> v(r,vector<int>(c)) ;
    for(int i=0;i<r;i++){
        vector<int> temp(c);
        for(int j=0;j<c;j++){
            cin>>temp[j];
        }
        v[i]=temp;
    }
    for(int i=0;i<c;i++){
        sum=0;
        for(int j=0;j<r;j++){
           sum+=v[j][i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
