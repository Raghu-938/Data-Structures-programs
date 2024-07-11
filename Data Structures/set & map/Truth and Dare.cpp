#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int t,tr,dr,ts,ds,num,flag;
    cin>>t;
    while(t--){
        unordered_set<int> truth,dare;
        cin>>tr;
        for(int i=0;i<tr;i++){
            cin>>num;
            truth.insert(num);
        }
        cin>>dr;
        for(int i=0;i<dr;i++){
            cin>>num;
            dare.insert(num);
        }
        cin>>ts;
        flag=1;
        for(int i=0;i<ts;i++){
            cin>>num;
            if(truth.find(num) == truth.end())
               flag=0;
        }
        cin>>ds;
        for(int i=0;i<ds;i++){
            cin>>num;
            if(dare.find(num) == dare.end())
               flag=0;
        }
        if(flag)
           cout<<"yes"<<endl;
        else
           cout<<"no"<<endl;
        
    }
    return 0;
}
