#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string str;
    cin>>str;
    unordered_set<char> s;
    for(int i=0;i<n;i++){
        str[i]=tolower(str[i]);
        s.insert(str[i]);
    }
    if(s.size() == 26)
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
    return 0;
}