#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i=1;
    cin>>t;
    while(t--){
        cout<<"Case "<<(i++)<<":"<<endl;
        cin>>n;
        char ch;
        stack<pair<int,int>> s;
        int num;
        while(n--){
            cin>>ch;
            if(ch == 'A'){
                cin>>num;
                if(s.empty())
                   s.push({num,num});
                else{
                    if(s.top().second > num)
                        s.push({num,s.top().second});
                    else
                        s.push({num,num});
                }
                // if(num > max)
                //   max=num;
                // s.push({num,max});
            }
            else if(ch == 'R'){
                if(!s.empty())
                  s.pop();
            }
            else{
                if(s.empty())
                  cout<<"Empty\n";
                else
                  cout<<s.top().second<<endl;
            }
        }
    }
    
    return 0;
}
