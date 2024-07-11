#include <bits/stdc++.h>
using namespace std;
long int temp=0;
long int armstrong(long int n,int t){
    if(n==0)
       return 0;
    int rem=n%10;
    temp+=pow(rem,t);
    return armstrong(n/10,t);
    
}

int main()
{
    long int n,res;
    cin>>n;
    int t=n;
    int count=0;
    while(t != 0){
        count++;
        t=t/10;
    }
    res=armstrong(n,count);
    if(temp==n){
        cout<<"Yes"<<endl;
    }
    else
       cout<<"No"<<endl;
}