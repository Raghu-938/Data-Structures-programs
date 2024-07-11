#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,col,i,j,t;
    cin>>t;
    while(t--){
        cin>>row>>col;
        vector<vector<char>> v(row,vector<char>(col));
        string str;
        for(i=0;i<row;i++){
            cin>>str;
            for(j=0;j<col;j++){
                v[i][j]=str[j];
            }
        }
        bool flag=true;
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(v[i][j] == 'W'){
                    if(j==0 || j==col-1 || i==row-1){
                        flag=false;
                        break;
                    }
                    else if(v[i+1][j]=='A' || v[i][j+1]=='A' || v[i][j-1]=='A'){
                        flag=false;
                        break;
                    }
                }
                else if(v[i][j]=='B'){
                    if(i!=row-1 && (v[i+1][j]=='W' || v[i+1][j]=='A')){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag == false)
              break;
        }
        if(flag)
          cout<<"yes"<<endl;
        else
          cout<<"no"<<endl;
    }

    return 0;
}