#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> v={25,10,5,1};
   int coins=0;
   int i=0;
   while(n != 0){
       while(v[i] > n)
         i++;
        coins+=n/v[i];
        n=n%v[i];
   }
   cout<<coins<<endl;
    return 0;
}