#include <iostream>
using namespace std;

int main()
{
    int n,k,v;
    char a;
    cin>>n;
    for(int i=1;i<=n;i++){
        k=i;
        a='A';
        v=0;
        for(int j=1;j<=(2*i)-1;j++){
            if(j<=k){
                cout<<a++<<" ";
            }
            else{
                cout<<(char)(a-2-v)<<" ";
                v++;
            }
        }
        cout<<endl;
    }
    return 0;
}