#include <iostream>
using namespace std;

int main()
{
    int r,c,count=0;
    cin>>r>>c;
    vector<vector<long int>> v(r,vector<long int>(c)) ;
    for(int i=0;i<r;i++){
        vector<long int> temp(c);
        for(int j=0;j<c;j++){
            cin>>temp[j];
            if(temp[j]==0)
              count++;
        }
        v[i]=temp;
    }
    if(count>(r*c/2))
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
    return 0;
}