#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int count=1;
    for(int i=0;i<str.length();i++){
        if(str[i] == str[i+1])
          count++;
        else{
            cout<<str[i]<<count;
            count=1;
        }
    }
    return 0;
}