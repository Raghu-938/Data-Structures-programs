#include <iostream>
using namespace std;

int main()
{
    int i,sum=0,n;
    for(i=1;i<=99;i++){
        cin>>n;
        sum=sum+n;
    }
    cout<<5050-sum<<endl;
    return 0;
}