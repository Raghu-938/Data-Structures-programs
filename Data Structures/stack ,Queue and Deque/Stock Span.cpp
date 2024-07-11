#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        stack<int> s;
        for(int i=0;i<n;i++){
            while(!s.empty() && v[i] >= v[s.top()])
               s.pop();
            if(s.empty())
               cout<<i+1<<" ";
            else
               cout<<i-s.top()<<" ";
            s.push(i);
        }
        cout<<endl;
    }

    return 0;
}
