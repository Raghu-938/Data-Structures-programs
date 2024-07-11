#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int t,n,sp;
    cin>>t;
    while(t--){
        cin>>n>>sp;
        string str; cin>>str;
        char ch;
        unordered_set<char> s;
        for(int i=0;i<n;i++){
            s.insert(str[i]);
        }
        if(s.size() >= sp)
           cout<<0<<endl;
        else{
           cout<<sp-s.size()<<endl;  
        }
    }

    return 0;
}
