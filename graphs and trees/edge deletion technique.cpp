#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,'0',sizeof(a));
inline void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int mx=1e5;
const int M=1e9 + 7;
vector<int>g[mx];
int subsum[mx];
void dfs(int  ver,int par=0)
{
        
        subsum[ver]+=ver;
        for(auto child : g[ver])
      {
        if(child == par)continue;
        dfs(child,ver);

 subsum[ver]+=subsum[child];

      }
  
}
int main()
{
    fi fo
    fast();
     int n;
     cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
   dfs(1);
   long long ans=0;
   for(int i=2;i<=n;i++)
   {
      int x=subsum[i];
      int y=subsum[1]-x;
      ans=max(ans,((x%M)*1LL*(y%M))%M);
   }
 cout<<ans<<endl;
   
}