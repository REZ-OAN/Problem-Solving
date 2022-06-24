
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
    you have two type queries
    
    type-1 - sum of the elements in the range of 
    (l,r) when array is not sorted

    type-2 - sum of the elements in the range of 
    (l,r) when array is sorted 

     constrain :
     2 <= n <= 10^5
     1 <= q <= 10^5
     1 <= l[i] < r[i] <= n 


***/
/***
 
     logic :
      this problem is based on prefix sum concept
      learn prefix sum and then apply it to 
      the solution
      *remember 
      it is better to impliment prefix sum concept
      on 1 based array index
***/
#include<bits/stdc++.h>
using namespace std;
#define reset(a) memset((a),0,sizeof(a));
#define ll long long
int main() {
   int n,q;
   cin>>n;
   int a[n+1];
   long long pre1[n+1],pre2[n+1];
   reset(pre1)
   reset(pre2)
   for(int i=1;i<=n;i++)
   {
    cin>>a[i];
    pre1[i]=pre1[i-1]+a[i];
   }
   sort(a+1,a+n+1);
   for(int i=1;i<=n;i++)
   {
    pre2[i]=pre2[i-1]+a[i];
   }
   cin>>q;
   while(q--)
   {
    int l,r,k;
    cin>>k>>l>>r;
    if(k==1)
    {
        cout<<pre1[r]-pre1[l-1]<<endl;
    }
    else 
    {
        cout<<pre2[r]-pre2[l-1]<<endl;
    }
   }
}