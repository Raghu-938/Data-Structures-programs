#include <iostream>
using namespace std;

int main()
{
    int b,e;
    long int sum=1;
    cin>>b>>e;
    if(e==0)
      cout<<"1"<<endl;
    else{
      for(int i=1;i<=e;i++){
          sum=sum*b;
      }
    cout<<sum<<endl;
    }
    return 0;
}
