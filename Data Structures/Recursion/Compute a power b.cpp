#include <bits/stdc++.h>
using namespace std;
long int power(int base,int expo){
    if(expo==1)
     return base;
    return base*power(base,expo-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(b==0)
      cout<<1<<endl;
    else{
        long int res=power(a,b);
        cout<<res<<endl;
    }
}