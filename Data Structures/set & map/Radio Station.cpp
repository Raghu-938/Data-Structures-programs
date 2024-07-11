#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string str1,str2;
    unordered_map<string,string> ip_name;
    for(int i=0;i<n;i++){
        cin>>str1>>str2;
        ip_name[str2+";"]=str1;
    }
    for(int i=0;i<m;i++){
        cin>>str1>>str2;
        cout<<str1<<" "<<str2<<" #"<<ip_name[str2]<<endl;
    }
    return 0;
}
