#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    vector<long int> v(n),a; 
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j])
              a.push_back(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        int b=0;
        for(int j=0;j<a.size();j++){
            if(v[i]==a[j]){
               b=1;
               break;
            }
        }
        if(b==0)
          cout<<v[i]<<" ";
    }
    return 0;
}
