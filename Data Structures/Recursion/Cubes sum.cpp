#include <bits/stdc++.h>
using namespace std;
long int sumofCubes(long int n){
    if(n==1)
     return 1;
    return (n*n*n)+sumofCubes(n-1);
}
int main()
{
    int n;
    cin>>n;
    long int res=sumofCubes(n);
    cout<<res<<endl;
}