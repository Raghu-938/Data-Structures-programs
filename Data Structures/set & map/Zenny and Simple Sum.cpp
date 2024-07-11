#include <iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--){
        cin>>n;
        unordered_map<string,int> mp;
        unordered_set<int> s;
        mp["positive"]=0;
        mp["negative"]=0;
        for(int i=0;i<n;i++){
            cin>>num;
            if(s.find(num) == s.end()){
                if(num > 0){
                   mp["positive"]+=num;
                }
                else{
                   mp["negative"]+=num;
                }
            }
            s.insert(num);
        }
        cout<<mp["positive"]<<" "<<mp["negative"]<<"\n";
    }

    return 0;
}
