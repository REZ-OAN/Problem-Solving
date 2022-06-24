
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     Given a string you have to answer some queries
     how many times the adjacent elements is equal
     in the given range l to r
     constrain :
     2 <= string size <= 10^5
     1 <= queries <= 10^5
     1 <= l[i] < r[i] <= n 


***/
/***
 
     logic :
       we have to build a prefixsum array
       if adjacent element equal then add 1 to the 
       previous and store it to current
       if adjacent element is not equal then add 0
       to the previous and store it to current

***/
#include<bits/stdc++.h>
using namespace std;
#define reset(a) memset(a,0,sizeof(a));
#define ll long long
int main() {
    string s;
    cin>>s;
    ll a[s.size()],m,i;
    reset(a)
   for(i=0;i<s.size();i++)
   {
      a[i+1]=a[i]+(s[i]==s[i+1]);
     
   }
   cin>>m;
  ll l,r;
 for(i=0;i<m;i++)
 {
   cin>>l>>r;
   cout<<a[r-1]-a[l-1]<<endl;
 } 
}