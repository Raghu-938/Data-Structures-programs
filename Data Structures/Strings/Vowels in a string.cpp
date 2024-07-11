#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    bool flag=true;
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i]=='I' || str[i]=='O' || str[i]=='U'|| str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            continue;
        }
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