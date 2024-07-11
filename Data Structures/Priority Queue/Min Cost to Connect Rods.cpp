#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,a,b,sum;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            cin>>x;
            pq.push(x);
        }
        sum=0;
        while(pq.size() > 1){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum=sum+(a+b);
            pq.push(a+b);
        }
        cout<<sum<<endl;
    }
    return 0;
}
