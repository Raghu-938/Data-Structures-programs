#include <iostream>
using namespace std;
int main()
{
    long int t,n,q,s,e,w,sum,a;
    scanf("%ld",&t);
    while(t--){
        sum=0;
        scanf("%ld",&n);
        for(int i=0;i<n;i++){
            scanf("%ld",&a);
            sum+=a;
        }
        scanf("%ld",&q);
        while(q--){
            scanf("%ld%ld%ld",&s,&e,&w);
            sum+=(e-s+1)*w;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
