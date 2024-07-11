#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,s=1,m=2,l=3,sum1,sum2;
    string str1,str2;
    cin>>t;
    while(t--){
        cin>>str1>>str2;
        sum1=0; sum2=0;
        if(str1[str1.length()-1] == 'S'){
            for(int i=str1.length()-1;i>=0;i--){
                if(str1[i] == 'S')
                   sum1+=s;
                else
                  sum1=sum1-1;
            }
        }
        else if(str1[str1.length()-1] == 'L'){
            for(int i=str1.length()-1;i>=0;i--){
                if(str1[i] == 'L')
                   sum1+=l;
                else
                  sum1=sum1+1;
            }
        }
        else
           sum1=sum1+m;
           
        if(str2[str2.length()-1] == 'S'){
            for(int i=str2.length()-1;i>=0;i--){
                if(str2[i] == 'S')
                   sum2+=s;
                else
                  sum2=sum2-1;
            }
        }
        else if(str2[str2.length()-1] == 'L'){
            for(int i=str2.length()-1;i>=0;i--){
                if(str2[i] == 'L')
                   sum2+=l;
                else
                  sum2=sum2+1;
            }
        }
        else
           sum2=sum2+m;
        
        if(sum1 > sum2)
           cout<<">"<<endl;
        else if(sum1 < sum2)
           cout<<"<"<<endl;
        else
           cout<<"="<<endl;
    }

    return 0;
}