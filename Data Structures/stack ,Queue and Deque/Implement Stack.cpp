#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,num;
    string str;
    cin>>t;
    stack<int> s;
    while(t--){
        cin>>str;
        if(str == "push"){
          cin>>num;
          s.push(num);
        }else{
            if(s.empty()){
                cout<<"Empty\n";
            }
            else{
            cout<<s.top()<<endl;
            s.pop();
            }
        }
    }
    return 0;
}
