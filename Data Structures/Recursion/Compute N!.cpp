#include <bits/stdc++.h>
using namespace std;
long int factorial(long int n){
    if(n==0)
     return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    long int res=factorial(n);
    cout<<res<<endl;
}