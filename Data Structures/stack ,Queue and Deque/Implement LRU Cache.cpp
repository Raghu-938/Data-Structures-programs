#include <bits/stdc++.h>
using namespace std;

// bool find(deque<int>& dq,int a){
//     for(int i:dq){
//         if(i==a)
//           return true;
//     }
//     return false;
//  }

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,a;
        cin>>n>>k;
        deque<int> dq;
        deque<int>:: iterator it;
        for(int i=0;i<n;i++){
            cin>>a;
            it=find(dq.begin(),dq.end(),a);
            if(it == dq.end()){
                if(dq.size() < k){
                    dq.push_back(a);
                    //cout<<"f "<<a;
                }
                else{
                    dq.pop_front();
                    dq.push_back(a);
                }
            }
            else{
                deque<int> temp=dq;
                dq.clear();
                while(!temp.empty()){
                    if(temp.front() == a){
                        temp.pop_front();
                        continue;
                    }
                    dq.push_back(temp.front());
                    temp.pop_front();
                }
                dq.push_back(a);
            }
        }
        for(int e:dq)
          cout<<e<<" ";
        cout<<endl;
    }
    return 0;
}