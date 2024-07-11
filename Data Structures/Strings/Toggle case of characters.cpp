#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int con=0,vow=0;
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
           str[i]=tolower(str[i]);
        else
           str[i]=toupper(str[i]);
    }
   cout<<str<<endl;
    return 0;
}