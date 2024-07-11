#include <bits/stdc++.h>
using namespace std;
long int temp=0;
void sumOddArray(vector<long int>& v,int n){
    if(n<0)
      return;
    if(v[n]%2 != 0)
        temp+=(v[n]);
    sumOddArray(v,n-1);
}

int main()
{
    int n;
    cin>>n;
    vector<long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sumOddArray(v,n-1);
    cout<<temp<<endl;
}