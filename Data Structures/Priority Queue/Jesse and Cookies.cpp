#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x,a,b;
    cin>>n>>k;
     priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        cin>>x;
        pq.push(x);
    }
    int i=0,sum;
    while(pq.top() < k && pq.size()>1){
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        sum=a+(b*2);
        pq.push(sum);
        i++;
    }
    if(pq.top() < k)
      cout<<-1;
    else
      cout<<i<<endl;
    return 0;
}
