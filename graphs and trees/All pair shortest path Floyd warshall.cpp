#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,0,sizeof(a));
#define mx 510
#define INF 1e9+10
inline void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
vector<vector<int>>dist(mx,vector<int>(mx,INF));

void warshall(int  n)
{
      for(int k=1;k<=n;k++)
      {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(dist[i][k]!=INF && dist[k][j]!=INF)
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
      }
}

int main()
{
   // fi fo
    for(int i=0;i<mx;i++)
    {
        for(int j=0;j<mx;j++)
        {
            if(i==j)dist[i][j]=0;
        }
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        dist[u][v]=w;
    }
    warshall(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(dist[i][j]==INF)cout<<"I ";
            else 
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
}