#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
#define reset(a)  memset(a,'0',sizeof(a));
const int mx=1e5 + 10;
vector<int>graph[mx];
bool vis[mx];
vector<int>cur_cc;
vector<vector<int>>cc;
void dfs(int v)
{
//take action on vertex after entering the vertex
  if(vis[v])return;
    cur_cc.push_back(v);
    vis[v]=true;
   
    for(auto &child : graph[v]){
     //take action on child before
     //entering the child node
    
        if(vis[child])continue;
        dfs(child);
     //take action on child 
     //after exiting the child node
    }
    //take action on vertex
    //before exiting the vertex
}
int main()
{
//   fi fo
    int nv,ne;
    cin>>nv>>ne;
   
    for(int i=0;i<ne;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ct=0;
  
    for(int i=1;i<=nv;i++)
    {
        if(vis[i]==0){
            cur_cc.clear();
           dfs(i);ct++;
           cc.push_back(cur_cc);
        }
    }
    for(int i=0;i<cc.size();i++)
    {
        for(auto &x : cc[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}