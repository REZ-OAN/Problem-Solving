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
   vector<pair<int,int>>v;
  void dfs(int r,int c,int cr,int cc,vector<vector<bool>>&vis,vector<vector<int>>&graph)
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
            if(graph[cr][cc]==graph[nr][nc]){
            v.push_back({cr,cc});
            dfs(r,c,nr,nc,vis,graph);
             
            }
        } 
    }
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r=image.size();
        int c=image[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,0));
        
        dfs(r,c,sr,sc,vis,image);
        for(auto &x : v)
        {
          image[x.first][x.second]=color;
        }
        image[sr][sc]=color;
        v.clear();
        return image;
            
    }
    
    
};
int main()
{
  fi fo
  int r,c,sr,sc,co;
  cin>>r>>c>>sr>>sc>>co;
  vector<vector<int>>grid(r,vector<int>(c));
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)cin>>grid[i][j];
  }

  Solution Ans;
  grid=Ans.floodFill(grid,sr,sc,co);
 for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)cout<<grid[i][j]<<" ";
    cout<<endl;
  }
}