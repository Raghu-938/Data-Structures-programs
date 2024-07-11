#include <bits/stdc++.h>
using namespace std;
long int temp=1;
void printArray(vector<long int>& v,int n){
    if(n<0)
      return;
    cout<<v[n]<<" ";
    printArray(v,n-1);
}

int main()
{
    int n;
    cin>>n;
    vector<long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    printArray(v,n-1);
}