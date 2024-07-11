#include <iostream>
using namespace std;

int main()
{
    int t,neg,zero=0,n,a;
    cin>>t;
    while(t--){
        neg=0;
        zero=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a==0)
              zero=1;
            if(a<0)
              neg++;
        }
        if((neg%2==0) || zero==1)
           cout<<"0"<<endl;
        else
           cout<<1<<endl;
    }
    return 0;
}