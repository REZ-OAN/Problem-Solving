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
    string s,p;
    getline(cin,s);
    getline(cin,p);
    ///for applying kmp we must place the pattern as prefix 
    s=p+"$"+s;
    vector<int>pi=prefix_func(s);
    bool k=0;
    for(int i=0;i<(int)pi.size();i++)
    {
        if(pi[i]==(int)p.size())
        {
           k=1;
            cout<<"Matched At Position  : "<<i-2*((int)p.size())+1<<endl;
        }
    }
   if(!k)cout<<"NOT FOUND\n";
   return 0;

}