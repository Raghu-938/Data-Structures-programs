#include <iostream>

using namespace std;

int main() {
    string str;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        if(str.substr(0,len-i-1) == str.substr(i+1)){
            cout<<len-i-1;
            break;
        }
    }
    return 0;
}