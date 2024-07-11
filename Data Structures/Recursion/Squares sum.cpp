#include <bits/stdc++.h>
using namespace std;
long int sumOfSqu(long int n){
    if(n==1)
     return 1;
    return (n*n)+sumOfSqu(n-1);
}
int main()
{
    int n;
    cin>>n;
    long int res=sumOfSqu(n);
    cout<<res<<endl;
}