#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,len,count;
    cin>>t;
    while (t--)
    {
        cin>>n;
        len=(2*n)-2;
        vector<string> v(len);
        for(int i=0;i<len;i++){
            cin>>v[i];
        }
        count=0;
        string str;
        for(int i=0;i<len;i++){
            str=v[i];
            reverse(str.begin(),str.end());
            for(int j=i+1;j<len;j++){
                if(str == v[j]){
                    count++;
                    break;
                }
            }
        }
        if(count ==len/2)
         cout<<"YES"<<endl;
        else
         cout<<"NO"<<endl;
    }
    return 0;
}
