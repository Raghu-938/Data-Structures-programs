#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string str,new_str="meow";
    bool flag;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        vector<char> v;
        for(int i=0;i<n;i++)
          str[i]=tolower(str[i]);
        for(int i=0;i<n;i++){
            if(str[i] != str[i+1]){
              v.push_back(str[i]);
            }
        }
        flag=false;
        if(v.size() == 4){
            for(int i=0;i<4;i++){
                if(new_str[i] != v[i]){
                    flag=true;
                    break;
                }
            }
        }
        else
          flag=true;
        if(flag)
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
    }
    return 0;
}
