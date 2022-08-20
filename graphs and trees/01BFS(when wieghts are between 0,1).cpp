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
///Chess MOVE
///4directional
int dx4[] = {+0, +0, -1, +1};
int dy4[] = {+1, -1, +0, +0};
///8directional
int dx8[] = {+0,+0,+1,-1,-1,+1,-1,+1}; 
int dy8[] = {-1,+1,+0,+0,+1,+1,-1,-1};
///knight's MOVE
int dxk8[] = {-2, -2, -1, -1,  1,  1,  2,  2};
int dyk8[] = {-1,  1, -2,  2, -2,  2, -1,  1};
const int mx=1e5+10;
const int M=1e9 + 7;
vector<pair<int,int>>g[mx];
bool vis[mx];
vector<int>level(mx,INT_MAX);
void bfs()
{
     deque<int>q;
     q.push_back(1);
     level[1]=0;
     while(!q.empty())
     {
      int par=q.front();
      q.pop_front();
      
      for(auto child : g[par])
      {
           int child_v=child.first;
           int child_ew=child.second;
           if(level[par]+child_ew<level[child_v]){
           level[child_v]=level[par]+child_ew;
           if(child_ew==1)q.push_back(child_v);
           else q.push_front(child_v);
           }
       }
      }
}
int main()
{
    fi fo
    fast();
     int n,m;
     cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u==v)continue;
        g[u].push_back({v,0});
        g[v].push_back({u,1});
    }
  bfs();
  if(level[n]==INT_MAX)cout<<"-1\n";
  else cout<<level[n]<<endl;
   
}