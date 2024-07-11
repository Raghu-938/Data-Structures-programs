#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    getline(cin,str);
    char ch;
    int count=0;
    cin>>ch;
    for(int i=0;i<str.length();i++){
        if(ch == str[i])
          count++;
    }
    cout<<count<<endl;
    return 0;
}