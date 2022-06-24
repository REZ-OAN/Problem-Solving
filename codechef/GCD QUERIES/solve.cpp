
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
    you are given an array size of n
    you have to perform q queries
    in each queries you have to print
    the gcd of the elments exculding 
    the elements in the range (l,r) where l and r is inclusive

     constrain :
    2 ≤ T, N ≤ 105,
    1 ≤ Q ≤ N, 1 ≤ A[i] ≤ 105
    1 ≤ L, R ≤ N and L ≤ R


***/
/***
 
     logic :
      this problem is based on prefix array concept
      let an array with elements 
        a,b,c,d,e
        if l=2 and r=4
        then b,c,d will discard from the 
        array and we have to print the 
        gcd of 
        a and e which is r+1 to n elements
        and 1 to l-1 elements
         if we create an pregcd array
         pregcd[]={gcd(a,0),gcd(a,b,0),gcd(a,b,c,0),gcd(a,b,c,d,0),gcd(a,b,c,d,e,0)};
         now see that
         we have to exclude items from the array in the range [2,4];
         hence we have got one gcd from 1 to l-1 which in the pregcd[l-1];
         again we store gcd of the reverse array then reverse the array
         postgcd[]={gcd(e,d,c,b,a,0),gcd(e,d,c,b,0),gcd(e,d,c,0),gcd(e,d,0),gcd(e,0)}
         here we can get the gcd of the elements from r+1 to n
         which is postgcd[r+1];
         then for each queries
         print 
         gcd(postgcd[r+1],pregcd[l-1]);

***/
#include<bits/stdc++.h>
using namespace std;
#define reset(a) memset((a),0,sizeof(a));
#define ll long long
int main() {
  int t;
  cin>>t;
  while(t--){
   int n,q;
   cin>>n>>q;
   int a[n+1];
   int  pre1[n+1],pre2[n+2];
   reset(pre1)
   reset(pre2)
   for(int i=1;i<=n;i++)
   {
    cin>>a[i];
    pre1[i]=__gcd(pre1[i-1],a[i]);
   }
   
   for(int i=n;i>=1;i--)
   {
    pre2[i]=__gcd(pre2[i+1],a[i]);
   }
  
   while(q--)
   {
    int l,r;
    cin>>l>>r;
    cout<<__gcd(pre1[l-1],pre2[r+1])<<endl;
   }
   }
}