
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
int dx4[] = {0, 0, -1, 1};
int dy4[] = {1, -1, 0, 0};
///8directional
int dx8[] = {0,0,1,-1,-1,1,-1,1}; 
int dy8[] = {-1,1,0,0,1,1,-1,-1};
///knight's MOVE
int dxk8[] = {-2, -2, -1, -1,  1,  1,  2,  2};
int dyk8[] = {-1,  1, -2,  2, -2,  2, -1,  1};
const int M=1e9 + 7;
bool vis[9][9];
int level[9][9];
bool isvalid(int nr,int nc)
{
  if(nr>8 || nc>8 || nr<1 || nc<1)return 0;
  return 1;
}

int bfs(int sr,int sc,int dr,int dc)
{
     queue<pair<int,int>>q;
     q.push({sr,sc});
     vis[sr][sc]=1;
     while(!q.empty())
     {
     pair<int,int>par=q.front();
     q.pop();
     for(int i=0;i<8;i++)
     {
          int nr=par.first+dxk8[i];
          int nc=par.second+dyk8[i];
          if(!isvalid(nr,nc))continue;
          if(!vis[nr][nc])
          {
            q.push({nr,nc});
            level[nr][nc]=level[par.first][par.second]+1;
            vis[nr][nc]=1;
          }
     }

     }
     return level[dr][dc];
}
int main()
{ 
    fi fo
    fast();
    int n;
    cin>>n;
  
   string a,b;
   while(n--){
    reset(vis);
    reset(level);
   cin>>a>>b;
   int  r1=a[1]-'0',r2=b[1]-'0',c1=a[0]-'`',c2=b[0]-'`';
      cout<<bfs(r1,c1,r2,c2)<<endl;
   }
   
} 