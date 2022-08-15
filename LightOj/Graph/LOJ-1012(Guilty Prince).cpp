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
int r,c;
int dx4[]={1,0,-1,0};
int dy4[]={0,1,0,-1};
const int mx=21;
int g[mx][mx];
bool v[mx][mx];
bool isvalid(int cr,int cc)
{
    if(cr>=r||cc>=c||cr<0||cc<0)return 0;
    return 1;
}
int cnt;
void dfs(int cr,int cc)
{
      if(v[cr][cc])return;
      v[cr][cc]=1;
      cnt++;
      for(int i=0;i<4;i++)
      {
          int nr=cr+dx4[i];
          int nc=cc+dy4[i];
          if(isvalid(nr,nc)==1&&g[nr][nc]==1&&g[cr][cc]==1)
          {
             
              dfs(nr,nc);
             
          }
          else continue;
      }
      
}
int main()
{
    fast();
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        cin>>c>>r;
        int sr,sc;
        for(int j=0;j<r;j++)
        {
            for(int k=0;k<c;k++)
            {
                v[j][k]=0;
                char c;
                cin>>c;
                if(c=='.')g[j][k]=1;
                else if(c=='@'){sr=j;sc=k;g[j][k]=1;}
                else g[j][k]=0;
            }
        }
     
        dfs(sr,sc);
        cout<<"Case "<<i<<": "<<cnt<<endl;
        cnt=0;
        i++;

    }
  
}
