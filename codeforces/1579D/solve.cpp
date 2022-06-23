
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     In a meeting there will be 'n' peoples
     They have  power of talking a[i] (non-negative integer) given in an array of 'n' people
     from them ,exactly two of them can talk privately.
     each time they talks thier power decreases by one from both.
     determine which people should talk to each other
     so that the total number of talks is as
     large as possible.
     constrains :
     1<= t <= 1000
     2<= n <= 2*10^5
     0<= a[i] <= 2*10^5

***/
/***
 
     logic :
     If someones talk power is zero , he can't talk 
     with anyone
     If we want that number of talks have to be large 
     as possible then we have to arrange them with their
     index in descending sorted order.
     Then we have to take two from the order and let them 
     talk privately until someones power encounter zero
     if encounter zero we will find the next pair
     and we have to print the positions whom are talking
     I implemented this logic with Priority_Queue

***/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    priority_queue<pair<int,int>>p;
    int x;
    for(int i=1;i<=n;i++)
    {
      cin>>x;
      if(x!=0)
      p.push({x,i});
    }
    while(p.size()>1)
    {
      auto f=p.top();
      p.pop();
      auto s=p.top();
      p.pop();
      v.push_back({min(f.second,s.second),max(f.second,s.second)});
      f.first--;
      s.first--;
      if(f.first)p.push(f);
      if(s.first)p.push(s);
    }
    cout<<v.size()<<endl;
    for(auto &x : v)
    {
      cout<<x.first<<" "<<x.second<<endl;
    }
  }
}


