#include<bits/stdc++.h>
using namespace std;
const int mx=1000;
vector<int>graph[mx];
bool vis[mx];
void dfs(int v)
{
//take action on vertex after entering the vertex
  if(vis[v])return;
    vis[v]=true;
    cout<<v<<endl;
    for(auto &child : graph[v]){
     //take action on child before
     //entering the child node
       cout<<"Par : "<<v<<" child : "<<child<<endl;
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
    int nv,ne;
    cin>>nv>>ne;
    for(int i=0;i<ne;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

}
