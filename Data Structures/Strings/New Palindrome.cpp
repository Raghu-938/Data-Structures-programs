#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int len=str.length()/2;
        count=0;
        vector<int> v(26);
        for(int i=0;i<len;i++){
            v[str[i]-97]++;
        }
        for(int x:v){
            if(x != 0)
               count++;
        }
        if(count >= 2){
            cout<<"YES"<<endl;
        }
        else
           cout<<"NO"<<endl;
    }

    return 0;
}