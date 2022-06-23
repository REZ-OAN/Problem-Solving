
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     Paranoid String :
     A string is called paranoid if we apply 
     belows operations on the string
     for m-1 number of times (m=string size)
     and got a string of length 1 .
     operation
    1 -  replace "01" to '1'
    2 -  replace "10" to '0'
    You are given a binary string S of length n indexed from 1 to n. 
    Find the number of pairs of integers(l,r) 1≤l≤r≤n 
    such that S[l…r] (the substring of S from l to r) is a 
    paranoid string.
    1 <= n <= 2*10^5
    It is guaranteed that 
    the sum of n over all test cases 
    doesn't exceed 2*10^5.

***/
/***
 
     logic :
     First of all ,all strings have length one
     they all are paranoid
     so firstly we can update our ans by
     the size of the string.
     then look
     if you have
     00001
     01 can be replaced by 1
     so how many times the 1 is included to the substring
     the substring always will be paranoid
     and how many times ===it can be found by the previous
     index (position=index+1) where we found the difference.

***/
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
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
  ll n;
  cin>>n;
  cin>>s;
  ll ans=n;
  for(ll i=0;i<s.size()-1;i++)
  {
    if(s[i]!=s[i+1])
    {
      ans+=(i+1);
    }
  }
  cout<<ans<<endl;
 }
   
 }


