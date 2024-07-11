#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum=0,rem,temp,count=0;
    cin>>num;
    temp=num;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(pow(rem,count));
        temp=temp/10;
    }
    if(sum==num)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    return 0;
}