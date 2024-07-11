#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::toupper);
        if(str == "YES")
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }

    return 0;
}