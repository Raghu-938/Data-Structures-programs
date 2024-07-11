#include <iostream>
using namespace std;

int main()
{
    int num,sum=0,rem,temp;
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(sum==num)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    return 0;
}