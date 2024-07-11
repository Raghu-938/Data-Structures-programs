#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,first,last,b,current;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        vector<long int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        b=0;
        first=0;
        last=v.size()-1;
        while(first<last){
            current=v[first]+v[last];
            if(current==2000){
                b=1;
                break;
            }
            else if(current<2000){
                first++;
            }
            else
               last--;
        }
        printf(b?"Accepted\n":"Rejected\n");
    }
    return 0;
}