#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string str1,str2,word;
        stack<string> s;
        for(int i=0;i<n;i++){
            cin>>str1;
            if(str1 == "cd"){
                cin>>str2;
                if(str2[0]== '/'){
                    while(!s.empty())
                      s.pop();
                }
                for(int j=0;j<str2.length();j++){
                    if(str2[j] != '/'){
                        word+=str2[j];
                    }
                    else{
                        if(word == ".."){
                            if(!s.empty())
                                s.pop();
                            word.clear();
                        }
                        else{
                            s.push(word);
                            word.clear();
                        }
                    }
                }
                // if(word == ".."){
                //     if(!s.empty())
                //         s.pop();
                //     word.clear();
                // }
                // else{
                //     s.push(word);
                //     word.clear();
                // }
            }
            else{
                stack<string> temp;
                if(s.empty())
                  cout<<"/";
                else{
                    while(!s.empty()){
                        temp.push(s.top());
                        s.pop();
                    }
                    if(i==0)
                        cout<<"/";
                    while(!temp.empty()){
                        s.push(temp.top());
                        cout<<temp.top()<<"/";
                        temp.pop();
                    }
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}
