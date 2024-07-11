#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    bool flag=false;
    cin>>str;
    vector<int> v(26);
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
        v[str[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(v[i] == 0){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else
       cout<<"YES"<<endl;
    return 0;
}
