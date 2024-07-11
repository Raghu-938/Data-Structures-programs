#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string str;
    priority_queue<int,vector<int>,greater<int>> pq;
    while(t--){
        cin>>str;
        if(str == "insert"){
            cin>>n;
            pq.push(n);
        }
        else if(str == "getMin"){
            if(!pq.empty())
               cout<<pq.top()<<endl;
            else
               cout<<"Empty\n";
        }
        else{
            if(!pq.empty())
               pq.pop();
        }
    }
    return 0;
}
