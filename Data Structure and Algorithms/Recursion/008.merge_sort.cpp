#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,0,sizeof(a));
#define mx 100010
 
inline void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void merging(vector<int>&a,int lb,int mid,int ub) {
    vector<int>temp;
      int i=lb;
      int j=mid+1;
     for(;i<=mid && j<=ub;)
     {
        if(a[i]<=a[j])temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
        
     }
     while(i<=mid){temp.push_back(a[i++]);}
     while(j<=ub){temp.push_back(a[j++]);}
     int k=lb;
     for(int i=0;i<temp.size()&& k<=ub;i++)
     {
          a[k++]=temp[i];
     }
}
void merge_s(vector<int>&v,int lb,int ub)
{
    if(lb>=ub)return;
    int mid=(lb+ub)/2;
    merge_s(v,lb,mid);
    merge_s(v,mid+1,ub);
    merging(v,lb,mid,ub);
}
int main() {
    fi fo
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(auto &x : v)cin>>x;
    merge_s(v,0,n-1);
    cout<<"Array After Appling Merge Sort : \n";
    for(auto &x : v)cout<<x<<" ";
    cout<<endl;
    
}