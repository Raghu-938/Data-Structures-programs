#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,num;
    string str;
    cin>>t;
    queue<int> q;
    while(t--){
        cin>>str;
        if(str == "Enqueue"){
          cin>>num;
          q.push(num);
        }
        else{
            if(q.size() ==0){
                cout<<"Empty\n";
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}
