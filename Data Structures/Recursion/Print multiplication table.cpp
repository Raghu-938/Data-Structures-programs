#include <bits/stdc++.h>
using namespace std;
long int temp=1;
void printTable(int n){
    if(temp>10)
    return;
    cout<<n<<" * "<<temp<<" = "<<n*temp<<endl;
    temp++;
    printTable(n);
}

int main()
{
    long int n;
    cin>>n;
    printTable(n);
}