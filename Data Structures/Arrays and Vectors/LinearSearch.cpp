#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,b=0,ind;
    long int key;
    cin>>n>>key;
    vector<long int> v(n); 
    for(i=0;i<n;i++){
        cin>>v[i];
        if(key==v[i]){
          b=1;
          ind=i;
        }
    }
    if(b==1)
      cout<<ind<<endl;
    else
      cout<<"-1"<<endl;
    return 0;
}