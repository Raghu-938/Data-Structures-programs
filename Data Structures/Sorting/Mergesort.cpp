#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& v,int l,int mid,int r){
    int i=l,j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=r){
        if(v[i] < v[j]){
            temp.push_back(v[i]);
            i++;
        }
        else{
            temp.push_back(v[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(v[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(v[j]);
        j++;
    }
    for(int i=l;i<=r;i++){
        v[i]=temp[i-l];
    }
}

void merge_sort(vector<int>& v,int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        merge_sort(v,l,mid);
        merge_sort(v,mid+1,r);
        merge(v,l,mid,r);
    }
}

int main()
{
   int i,j,a;
   vector<int> v;
   while(cin>>a){
       v.push_back(a);
   }
   merge_sort(v,0,v.size()-1);
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }

    return 0;
}
