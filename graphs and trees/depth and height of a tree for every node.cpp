#include<bits/stdc++.h>
using namespace std;
///tree te cycle nai tai visited array laghbe na
const int N=1000;
vector<int>g[N];
int dep[N];
int hgt[N];
void dfs(int ver,int par=0){
    for(auto ch : g[ver])
    {
        if(ch==par)continue;
        dep[ch]=dep[ver]+1;
        dfs(ch,ver);
        hgt[ver]=max(hgt[ver],hgt[ch]+1);
    }
}
int main()
{
   int nv,ne;
   cin>>nv;
   for(int i=0;i<nv-1;i++)
   {
      int x,y;
      cin>>x>>y;
      g[x].push_back(y);
      g[y].push_back(x);
   }  
   dfs(1);
   for(int i=1;i<=nv;i++)
   {
    cout<<dep[i]<<" "<<hgt[i]<<endl;
   }
   
}