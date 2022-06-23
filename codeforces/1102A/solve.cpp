
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     You are given an integer sequence 1,2,…,n.
     You have to divide it into two 
     sets A and B in such a way 
     that each element belongs to exactly one set 
     and |sum(A)−sum(B)| is minimum possible.
     constrain :
     1<= n <= 2.10^9

***/
/***
 
     logic :
       Look we have told that we have all the integers
       from 1 to n 
       if the sum of all integers in the range is even
       then we can divide it into two equal parts hence 
       the ans always will be 0
       on the otherhand if the sum of all integers in the 
       range is odd then we can divide it two unequal parts
       if one parts sum is x 
       then other part will be x+1 or x-1
       hence in this case the answer always will be 1
       summation of 1 to n is given by n*(n+1)/2
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
 long long n;
 cin>>n;
 n=n*(n+1)/2;
 if(n%2==0)cout<<"0\n";
 else cout<<"1\n";
 return 0;
 }
    
    
     
     