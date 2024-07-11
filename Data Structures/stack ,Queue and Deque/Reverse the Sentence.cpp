#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char space=' ';
    while(n--){
        string str,temp="";
        getline(cin,str);
        stack<string> s;
        for(int i=0;i<=str.length();i++){
            if(str[i] == ' ' || i==str.length()){
                s.push(temp);
                temp="";
            }
            else
              temp=temp+str[i];
        }
        while(!s.empty()){
           cout<<s.top()<<" ";
           s.pop();
        }
        cout<<endl;
        
    }
    return 0;
}
