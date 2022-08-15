#include<bits/stdc++.h>
using namespace std;
const int mx=1000;
int graphM[mx][mx];
vector<int>graphL[mx];
vector<pair<int,int>>graphL1[mx];
int main()
{
    int ver,edge;
    cin>>ver>>edge;
    ///adjacency matrix representation
    for(int i=0;i<edge;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        ///for matrix
        graphM[v1][v2]=1;
        graphM[v2][v1]=1;
        ///for adjacency list
        graphL[v1].push_back(v2);
        graphL[v2].push_back(v1);
    }
    cout<<"Adjacency matrix : "<<endl;
    for(int i=1;i<=ver;i++)
    {
        for(int j=1;j<=ver;j++)
        {
            cout<<graphM[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Adjacency List : "<<endl;
    for(int i=1;i<=ver;i++)
    {
        for(int j=0;j<graphL[i].size();j++)
        {
            cout<<graphL[i][j]<<" ";
        }
        cout<<endl;
    }
    ///weighted graph representation
    cin>>ver>>edge;
     for(int i=0;i<edge;i++)
    {
        int v1,v2,w;
        cin>>v1>>v2>>w;
        ///for matrix
        graphM[v1][v2]=w;
        graphM[v2][v1]=w;
        ///for list
        graphL1[v1].push_back({v2,w});
        graphL1[v2].push_back({v1,w});
    }
    cout<<"Adjacency matrix with weight : "<<endl;
    for(int i=1;i<=ver;i++)
    {
        for(int j=1;j<=ver;j++)
        {
            cout<<graphM[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Adjacency List weight : "<<endl;
    for(int i=1;i<=ver;i++)
    {
        for(int j=0;j<graphL1[i].size();j++)
        {
            cout<<"{"<<graphL1[i][j].first<<","<<graphL1[i][j].second<<"}"<<" ";
        }
        cout<<endl;
    }

}