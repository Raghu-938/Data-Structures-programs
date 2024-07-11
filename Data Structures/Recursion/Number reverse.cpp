#include <bits/stdc++.h>
using namespace std;
long int rev=0;
long int reverseNum(long int n){
    if(n==0)
      return rev;
    int rem=n%10;
    rev=rev*10+rem;
    return reverseNum(n/10);
}
int main()
{
    long int n;
    cin>>n;
    long int res=reverseNum(abs(n));
    if(n<0){
        cout<<0-res<<endl;
    }
    else
      cout<<res<<endl;
    
}