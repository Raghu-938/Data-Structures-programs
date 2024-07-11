#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,w,v,c;
    string str;
    cin>>t;
    cin.ignore();
    while(t--){
        w=0; v=0; c=0;
        getline(cin,str);
        for(int i=0;i<str.length();i++){
            if(!(isspace(str[i])) && (isspace(str[i+1])))
               w++;
            if(isalpha(str[i])){
                str[i]=tolower(str[i]);
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                  v++;
                else
                 c++;
            }
        }
        if(str[str.length()-1] == ' ')
          cout<<w<<" "<<v<<" "<<c<<endl;
        else
          cout<<w+1<<" "<<v<<" "<<c<<endl;
    }

    return 0;
}