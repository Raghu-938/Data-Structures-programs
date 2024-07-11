#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,t,res,i,even,odd;
    cin>>t;
    while(t--){
        cin>>n;
        odd=(n & 2863311530);
        even=(n & 1431655765);
        even=(even << 1);
        odd=(odd >> 1);
        cout<<(even | odd)<<endl;
    }
    return 0;
}
