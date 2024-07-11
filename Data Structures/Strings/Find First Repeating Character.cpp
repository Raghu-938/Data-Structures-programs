#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string str;
    cin>>t;
    int count;
    bool flag;
    while(t--){
        cin>>str;
        flag=false;
        for(int i=0;i<str.length();i++){
            count=1;
            for(int j=i+1;j<str.length();j++){
                if(str[i] == str[j])
                  count++;
                if(count==2){
                    cout<<str[i]<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
              break;
        }
        if(!flag)
          cout<<"."<<endl;
    }
}