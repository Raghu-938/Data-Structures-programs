#include <iostream>
using namespace std;

int main()
{
    long int num,rev=0;
    cin>>num;
    while(num!=0){
        int rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout<<rev<<endl;
    return 0;
}