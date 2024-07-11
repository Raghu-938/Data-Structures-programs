#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str1,str2;
    while(t--){
        cin>>str1>>str2;
        unordered_map<char,int> mp;
        if(str1.length() != str2.length())
           cout<<"False\n";
        else{
            for(int i=0;i<str1.length();i++){
                mp[str1[i]]++;
                mp[str2[i]]--;
            }
            bool flag=true;
            for(auto p:mp){
                if(p.second != 0){
                    flag=false;
                    break;
                }
            }
            if(flag)
               cout<<"True\n";
            else
               cout<<"False\n";
        }
    }
    return 0;
}
