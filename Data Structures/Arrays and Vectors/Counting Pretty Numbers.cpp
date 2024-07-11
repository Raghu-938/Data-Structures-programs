#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t,f,l,r,count;
    cin>>t;
    while(t--){
        count=0;
        cin>>f>>l;
        for(int i=f;i<=l;i++){
            r=i%10;
            if(r==2 || r==3 || r==9)
              count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
