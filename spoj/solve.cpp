#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)

int r,c;
const int mx=52;
vector<vector<char>>graph(mx,vector<char>(mx));
bool vis[mx][mx];

///8directional move
int dx8[]={1,1,0,-1,-1,-1,0,1};
int dy8[]={0,1,1,1,0,-1,-1,-1};
///function that will check whether I cross the 
///matrix by any directional move
// r=row c=column cc=current column,cr =current row

inline bool isvalid(int cr,int cc)
{
    if(cr<0 || cr>=r || cc<0 || cc>=c )return 0;
    return 1;
}

template<typename T>
bool isprime(T n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int maxpath=0;

void dfs(int cr,int cc,int cl=1)
{
//take action on vertex after entering the vertex
  if(vis[cr][cc])return;
    vis[cr][cc]=1;
    maxpath=max(maxpath,cl);
    for(int i=0;i<8;i++){
     //take action on child before
     //entering the child node
      int nx=cr+dx8[i];
      int ny=cc+dy8[i];
       if(isvalid(nx,ny)){
        if(graph[nx][ny]-graph[cr][cc]==1)
        {dfs(nx,ny,cl+1);}
        else continue;
        }
       
     //take action on child 
     //after exiting the child node
    }
    //take action on vertex
    //before exiting the vertex
    
}
int main()
{
 
    int k=0;
    while(1)
    { 
        cin>>r>>c;
        if(r==0&&c==0)break;
         
            k++;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cin>>graph[i][j];
                    vis[i][j]=false;
                }
            }
       
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                     
                    if(graph[i][j]=='A')
                    {
                        dfs(i,j,1);
                    }

                }
              
               
            }
         
            cout<<"Case "<<k<<": "<<maxpath<<"\n";
          
            maxpath=0;
        
    }
    return 0;
}
