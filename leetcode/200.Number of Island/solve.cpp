#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,'0',sizeof(a));
class Solution {
public:
   
    bool isvalid(int r,int c,int cr,int cc)
    {
    if(r<=cr || cr<0 || cc<0 ||cc>=c)return 0;
    return 1;
   }
  void dfs(int r,int c,int cr,int cc,vector<vector<bool>>&vis,vector<vector<char>>& graph)
    {
       int dx4[]={1,0,-1,0};
       int dy4[]={0,1,0,-1};
    if(vis[cr][cc])return;
    vis[cr][cc]=1;
    for(int i=0;i<4;i++)
    {
        int nr=cr+dx4[i];
        int nc=cc+dy4[i];
        if(isvalid(r,c,nr,nc)) 
        {
            if((graph[cr][cc]=='1'&&graph[nr][nc]=='1'))
            dfs(r,c,nr,nc,vis,graph);
        } 
    }
}
    int numIslands(vector<vector<char>>& grid) {
         int r=grid.size();
         int c=grid[0].size();
         vector<vector<bool>>vis(r,vector<bool>(c));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                vis[i][j]=0;
            }
        }
        int k=0;
         for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
              if(grid[i][j]=='1'&&vis[i][j]==0)
              {
                dfs(r,c,i,j,vis,grid);
                  k++;
              }
            }
        }
        
       return k ;
    }
};
int main()
{
  int r,c;
  cin>>r>>c;
  vector<vector<char>>grid(r,vector<char>(c));
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)cin>>grid[i][j];
  }
  Solution Ans;
  cout<<Ans.numIslands(grid)<<endl;
   
}