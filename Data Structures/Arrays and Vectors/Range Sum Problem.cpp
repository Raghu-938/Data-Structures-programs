#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long int n,q;
    int f,l;
    cin>>n>>q;
    vector<long int> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
        v[i+1]+=v[i];
    }
    while(q--){
        cin>>f>>l;
        cout<<(f>1 ? v[l - 1]-v[f - 2] : v[l - 1])<< endl;
    }
    return 0;
}