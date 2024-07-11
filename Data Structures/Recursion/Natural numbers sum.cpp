#include <bits/stdc++.h>
using namespace std;
long int sumOfEle(long int n){
    if(n==1)
     return 1;
    return n+sumOfEle(n-1);
}
int main()
{
    int n;
    cin>>n;
    long int res=sumOfEle(n);
    cout<<res<<endl;
}