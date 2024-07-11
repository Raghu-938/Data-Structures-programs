#include <bits/stdc++.h>
using namespace std;
int c=1;
int find(vector<int>& v){
    if(v[c-1] != c){
        return c;
    }
    c++;
    return find(v);
}

int main()
{
    int n=99;
    vector<int> v(99);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<find(v);
}