#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    bool flag=true;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i] >= '0' && str[i]<='9')
            continue;
        else{
            flag=false;
            break;
        }
    }
    if(flag)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    return 0;
}