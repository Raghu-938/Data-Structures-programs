#include <bits/stdc++.h>
using namespace std;
long int ind=-1;
long int searchArray(vector<long int>& v,int n,int key){
    if(n<0)
      return ind;
    if(v[n]==key){
        ind=n;
        return ind;
    }
    return searchArray(v,n-1,key);
}

int main()
{
    int n,key;
    cin>>n>>key;
    vector<long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<searchArray(v,n-1,key)<<endl;
}