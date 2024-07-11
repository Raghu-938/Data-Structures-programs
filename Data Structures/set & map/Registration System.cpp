#include <iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>str;
        if(mp.find(str) == mp.end()){
            cout<<"OK"<<endl;
            mp[str]=0;
        }
        else{
            mp[str]++;
            cout<<str<<mp[str]<<endl;
        }
    }
    return 0;
}
