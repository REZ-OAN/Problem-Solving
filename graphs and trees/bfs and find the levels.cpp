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
bool vis[mx];
int level[mx];
void bfs(int sr)
{
     queue<int>q;
     q.push(sr);
     vis[sr]=1;
     while(!q.empty())
     {
      int par=q.front();
      q.pop();
      cout<<par<<" ";
      for(auto child : g[par])
      {
        if(!vis[child])
             {
              q.push(child);
              vis[child]=1;
             level[child]=level[par]+1;
             }
      }

     }
cout<<endl;
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
  bfs(1);
  for(int i=1;i<=n;i++)
  {
    cout<<level[i]<<endl;
  }
   
}