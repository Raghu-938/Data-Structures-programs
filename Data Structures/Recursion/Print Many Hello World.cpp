#include <bits/stdc++.h>
using namespace std;
int c=0;
void printHello(){
    if(c>=1000)
      return;
    cout<<"Hello World"<<endl;
    c++;
    printHello();
}

int main()
{
    printHello();
    return 0;
}