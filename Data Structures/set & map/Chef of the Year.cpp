#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c,v;
    cin>>c>>v;
    map<string,string> entry;
    map<string,int> chef,country;
    string str1,str2;
    for(int i=0;i<c;i++){
        cin>>str1>>str2;
        entry[str1]=str2;
    }
    
    for(int i=0;i<v;i++){
        cin>>str1;
        chef[str1]++;
        country[entry[str1]]++;
    }
    
    int max=0;
    for(auto p:chef){
        if(p.second > max){
            max=p.second;
            str1=p.first;
        }
    }
    max=0;
    for(auto p:country){
        if(p.second > max){
            max=p.second;
            str2=p.first;
        }
    }
    
    cout<<str2<<"\n"<<str1<<endl;
    return 0;
}
