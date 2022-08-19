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
int par[mx];
void dfs(int  ver,int p=0)
{
          par[ver]=p; 
        for(auto child : g[ver])
      {
        if(child == p)continue;
        dfs(child,ver);
      }
}
vector<int> pth(int v)
{
      vector<int>ans;
      while(v)
      {
        ans.push_back(v);
        v=par[v];
      }
      reverse(ans.begin(),ans.end());
      return ans;
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
    int n1,n2;
    cin>>n1>>n2;
    vector<int>p1=pth(n1);
    vector<int>p2=pth(n2);
    int i=0;
    while(p1[i]==p2[i])
    {
      i++;
    }
  i--;
  cout<<p1[i]<<endl;
}