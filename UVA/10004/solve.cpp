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
bool bfs(int ver,vector<vector<int>>&g,vector<int>&color)
{
        queue<int>q;
        q.push(ver);
        while(!q.empty() && k==1)
        {
            int par=q.front();
            q.pop();
            color[par]=1;
            for(auto child : g[par])
            {
                     if(color[child]==2)
                     {
                        color[child]=1-color[par];
                     }
                      if(color[child]==color[par])return 0;
            }
        }
        return 1;
}
int main()
{
    fi fo
    int n,e;
    while(cin>>n)
    {
        if(n==0)return 0;
        cin>>e;
        vector<vector<int>>g(n);
        vector<int>color(n,2);
        for(int i=0;i<e;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if(bfs(0,g,color))
        cout<<"BICOLORABLE.\n";
        else 
        cout<<"NOT BICOLORABLE.\n";

    }
}