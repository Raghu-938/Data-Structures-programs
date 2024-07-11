#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int con=0,vow=0;
    for(int i=0;i<str.length();i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i]=='I' || str[i]=='O' || str[i]=='U'|| str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vow++;
        }
        else
           con++;
    }
   cout<<vow<<" "<<con<<endl;
    return 0;
}