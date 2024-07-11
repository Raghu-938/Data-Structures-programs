#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b;
    cin>>a>>b;
    int res=1;
    res=(res<<b);
    cout<<(a | res)<<endl;
    return 0;
}