#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length()/2;i++){
        char temp=str[i];
        str[i]=str[str.length()-1-i];
        str[str.length()-1-i]=temp;
    }
    cout<<str<<endl;
    return 0;
}