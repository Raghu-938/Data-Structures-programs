#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d;
    string str;
    bool flag;
    cin>>t;
    while(t--){
        cin>>n>>d;
        cin>>str;
        flag=false;
        char ch=(char)(d+48);
        for(int i=0;i<n;i++){
            if(ch > str[i] && flag==false){
                flag=true;
                cout<<ch;
            }
            cout<<str[i];
        }
        if(flag==false)
           cout<<ch;
        cout<<endl;
    }
    return 0;
}