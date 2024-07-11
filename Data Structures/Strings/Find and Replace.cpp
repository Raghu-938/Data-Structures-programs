#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string str;
    bool flag;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>str;
        vector<int> v(26);
        for(int i=0;i<n;i=i+2){
            v[str[i]-97]++;
        }
        flag=false;
        for(int i=1;i<n;i=i+2){
            if(v[str[i]-97] !=0){
                flag=true;
                break;
            }
        }
        if(flag)
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
    }

    return 0;
}