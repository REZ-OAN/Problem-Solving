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
vector<pair<int,int>>g[mx];
vector<int>dist(mx,INFINITY);
vector<bool>vis(mx,0);
void dijkstra(int source)
{
  set<pair<int,int>> st;
  st.insert({0,source});
  dist[source]=0;
  while(st.empty()!=1)
  {
    auto node=*st.begin();
    int v=node.second;
    st.erase(st.begin());
    if(vis[v])continue;
    vis[v]=1;
    for(auto child : g[v])
    {
        int child_v=child.first;
        int w=child.second;
        dist[child_v]=min(dist[child_v],w+dist[v]);
        st.insert({dist[child_v],child_v});
    }
  }
}

int main()
{
    fast();
   // fi fo
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
      
      
     
    }
    int t; 
    cin>>t; 
    dijkstra(t);
    for(int i=0;i<n;i++)cout<<dist[i]<<endl;
}