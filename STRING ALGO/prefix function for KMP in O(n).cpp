#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_func(string s)
{
    int n=(int)s.size();
    vector<int>pi(n);
    pi[0]=0;
    int j=0,i=1;
    for(int i=1;i<n;i++)
    {
             j=pi[i-1];
             while(s[j]!=s[i]&&j>0)
             {
                j=pi[j-1];
             }
             if(s[j]==s[i])j++;
             pi[i]=j;
    }
  
    return pi;
}
int main()
{

    string s;
    cin>>s;
    vector<int>v=prefix_func(s);
    for(auto &x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}