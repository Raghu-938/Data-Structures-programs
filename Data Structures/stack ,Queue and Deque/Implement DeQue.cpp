#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,num;
    string str;
    cin>>t;
    deque<int> q;
    while(t--){
        cin>>str;
        if(str == "push_back"){
          cin>>num;
          q.push_back(num);
        }
        else if(str == "push_front"){
            cin>>num;
            q.push_front(num);
        }
        else if(str == "pop_back"){
            if(q.empty())
               cout<<"Empty\n";
            else{
              cout<<q.back()<<endl;
              q.pop_back();
            }
        }
        else{
            if(q.size() ==0){
                cout<<"Empty\n";
            }
            else{
                cout<<q.front()<<endl;
                q.pop_front();
            }
        }
    }
    return 0;
}
