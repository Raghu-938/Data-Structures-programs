#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        unordered_map<char,int> mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        char ch='.';
        for(int i=0;i<str.length();i++){
            if(mp[str[i]] > 1){
                ch=str[i];
                break;
            }
        }
        cout<<ch<<endl;
    }
    return 0;
}
