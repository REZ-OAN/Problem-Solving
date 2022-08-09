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
   
  void dfs(int r,int c,int cr,int cc,int init,vector<vector<int>>&graph,int o)
    {
       int dx4[]={1,0,-1,0};
       int dy4[]={0,1,0,-1};
    if(init!=graph[cr][cc])return;
    graph[cr][cc]=o;
    for(int i=0;i<4;i++)
    {
       
        int nr=cr+dx4[i];
        int nc=cc+dy4[i];
        
        if(isvalid(r,c,nr,nc)&&graph[nr][nc]==init) 
        {
            dfs(r,c,nr,nc,init,graph,o);
        } 
    }
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r=image.size();
        int c=image[0].size();
        int init=image[sr][sc];
        if(init!=color)
        dfs(r,c,sr,sc,init,image,color);
       
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