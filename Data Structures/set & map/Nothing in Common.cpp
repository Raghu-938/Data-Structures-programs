#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t,a,b,count,num;
    cin>>t;
    while(t--){
        cin>>a>>b;
        unordered_set<int> s;
        for(int i=0;i<a;i++){
            cin>>num;
            s.insert(num);
        }
        count=0;
        for(int i=0;i<b;i++){
            cin>>num;
            if(s.find(num) != s.end())
               count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
