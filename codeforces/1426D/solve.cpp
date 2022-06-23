
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
         given an array you have to insert minimum number of elements
         so that the sum of every element in a sub-segment of that array doesn't equals to zero 
         contrains :
         2 <= n <= 2*10^5
         -10^9 <= a[i] <= 10^9 a[i]!=0
***/
/***
 
     logic :
          simply check the prefix sum 
          you see if a segment into (l,r)
          then presum[r]-presum[l-1]==0
          or they are equal
          and we have to insert a number so that
          the segment sum is not equal to zero
          but then the array prefix sum will be changed
          how can we resolve this 
          this can be solve with the help of an observation
          let
          prefix sum  array
          [....a,b,c,d,10,x,y,z,w,10,a1,b1,c1....]
          here we see that in two place the prefix sum is same
          that means x+y+z+w=0;
          if we add w to that segment the sum will be w
          and this can be added easily
          and how many time we have found this
          the count will be our answer
      
***/
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a;
  int cnt=0;
  long long sum=0;
  set<long long>s;
  s.insert(sum);
  for(int i=0;i<n;i++)
  {
    cin>>a;
    sum+=a;
    if(s.count(sum))
    {
      s.clear();
      sum=a;
      cnt++;
      s.insert(0);
      s.insert(a);
   }
  else 
  {
    s.insert(sum);
   }
  }
  cout<<cnt<<endl;

}

    
    
     
     