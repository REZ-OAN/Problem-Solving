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
const int mx=503;
const int M=1e9 + 7;
bool vis[mx][mx];
int g[mx][mx];
int lvl[mx][mx];
  int n,m;
bool isvalid(int nr,int nc)
{
  if (nr>n || nc>m || nr<1 || nc<1)return 0;
  return 1;
}
int bfs(int Mx)
{
     queue<pair<int,int>>q;
     for(int i=1;i<=n;i++)
     {
      for(int j=1;j<=m;j++)
      {
        lvl[i][j]=INT_MAX;
        vis[i][j]=0;
         if(Mx==g[i][j])
         {
            vis[i][j]=1;
            q.push({i,j});
            lvl[i][j]=0;
         }
        
      }
     }  
     int ans=0;
     while(!q.empty())
     {
          pair<int,int> par=q.front();
          int par_r=par.first;
          int par_c=par.second;
          q.pop();
          for(int i=0;i<8;i++)
          {
              int nr=par_r+dx8[i];
              int nc=par_c+dy8[i];
              if(!isvalid(nr,nc))continue;
              if(vis[nr][nc])continue;
              q.push({nr,nc});
              lvl[nr][nc]=lvl[par_r][par_c]+1;
              vis[nr][nc]=1;
              ans=max(ans,lvl[nr][nc]);

          }
     }
    return ans;
}
int main()
{
   fi fo
    fast();
    int t;
    cin>>t;
    while(t--){
     cin>>n>>m;
     int Mx=-1;
     for(int i=1;i<=n;i++)
     {
      for(int j=1;j<=m;j++)
      {
        vis[i][j]=0;
        cin>>g[i][j];
        Mx=max(Mx,g[i][j]);
      }
     }
  
     cout<<bfs(Mx)<<endl;
    }

   
   
}