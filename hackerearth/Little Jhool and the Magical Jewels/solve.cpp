
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given a string you have to find how many times
     you can retrive "ruby" from that string
     constrain :
     1 <= t <=100
     1 <= string length <= 100

***/
/***
 
     logic :
       just count the chararters 
       r ,u,b,y 
       and answer will be the minumum of this four counts
***/
#include<bits/stdc++.h>
using namespace std;
 
inline void fastio()
{
  std :: ios_base :: sync_with_stdio(false);
       cin.tie(NULL);
       cout.tie(NULL);
}


int main()
{
  fastio();
 int t;
 cin>>t;
 while(t--)
 {
    string s;
    cin>>s;
    int ans=count(s.begin(),s.end(),'r');
    ans=min(ans,(int)count(s.begin(),s.end(),'u'));
    ans=min(ans,(int)count(s.begin(),s.end(),'b'));
    ans=min(ans,(int)count(s.begin(),s.end(),'y'));
    cout<<ans<<endl;


 }
 }
    
    
     
     