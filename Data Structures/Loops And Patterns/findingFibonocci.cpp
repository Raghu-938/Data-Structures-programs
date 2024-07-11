#include <iostream>
using namespace std;

int main()
{
    int a=0,b=1,c=1,n;
    cin>>n;
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
    return 0;
}