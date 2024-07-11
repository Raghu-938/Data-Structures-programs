#include <iostream>
using namespace std;

int main() {
    int t,n,a,sum;
    cin>>t;
    while(t--){
      cin>>n;
      sum=0;
      while(n--){
          cin>>a;
          sum=(sum ^ (2*a));
      }
      cout<<sum<<endl;
    }
    return 0;
}
