
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given two string  T ans S
     you have to find if any of the permutations of T is present in that string S
    Constraints:
     1 ≤ T ≤ 100
     1 ≤ |Pattern| ≤ 1000
     1 ≤ |Text String| ≤ 100000

***/
/***
 
     logic :
     you have to pre count the frequency of the distinct character in T
     then you have check all of the substrings of length of |T| in S 
     that the distinct character frequency is equal or not

      
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
    string t,s;
    cin>>t>>s;
    int n1=t.size();
    int n2=s.size();
    vector<int>v1(26,0),v2(26,0);
    for(int i=0;i<n1;i++)
    {
        v1[t[i]-'a']++;
    }
    for(int i=0;i<n1;i++)
    {
        v2[s[i]-'a']++;
    } 
    bool f=0;
    for(int i=n1;i<n2;i++)
    {
        bool k=1;
        for(int j=0;j<26;j++)
        {
            if(v1[j]!=v2[j])
            {
                k=0;break;
            }
        }
        if(k==1){f=1;break;}
        v2[s[i-n1]-'a']--;
        v2[s[i]-'a']++;
    }
       bool k=1;
       for(int i=0;i<26 && f==0;i++)
       {
        if(v1[i]!=v2[i]){k=0;break;}
       }
       if(k)f=1;
       if(f)cout<<"YES\n";
       else cout<<"NO\n";
    }
 }
 
    
    
     
     