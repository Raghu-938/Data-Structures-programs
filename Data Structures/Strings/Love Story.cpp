#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,count;
    cin>>t;
    string str1="codeforces",str;
    while(t--){
      cin>>str;
      count=0;
      for(int i=0;i<str.length();i++){
          if(str[i] != str1[i])
            count++;
      }
      cout<<count<<endl;
    }
    return 0;
}