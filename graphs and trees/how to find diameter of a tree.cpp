#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,0,sizeof(a));
inline void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
const int mx=1e5;
vector<int>g[mx];
int dept[mx];
int mmx=0;
int node;
void dfs(int  ver,int par=0)
{
       
        for(auto child : g[ver])
      {
        if(child == par)continue;
        dept[child]=dept[ver]+1;
        if(mmx<dept[child])
        {
            mmx=dept[child];
            node=child;
        }
        dfs(child,ver);
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
  reset(dept);
  dfs(node);
 cout<<dept[node]<<endl;
   
}