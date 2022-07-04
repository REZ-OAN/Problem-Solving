
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given two arrays
     one is the interest of teacher on ith sub
     other is the interest of student on ith sub
     you have to find how many pairs maintain this inequality
     a[i]+a[j]>b[i]+b[j] where i<j
     constrain :
     2<= n <=   2*10^5
     1<= a[i],b[i] <= 10^9


***/
/***
 
     logic :
     =>    a[i]+a[j]>b[i]+b[j]
     =>    a[i]-b[i]>b[j]-a[j]
     =>    -(b[i]-a[i])>b[j]-a[j]
     =>    -c[i]>c[j]
     now we have to find the 1st index where
     c[j]>=-c[i] happens
     because we have to count how many elements are maintain  this inequality -c[i]>c[j]
     this can be found by using lowerbound
     ex :
    5
    4 8 2 6 2
    4 5 4 1 3
    0 -3 2 -5 1
    -5 -3 0 1 2
     -5  =c[i],  5 >c[j]; from that index i<j;
     -3,0,1,2 is 4

     -3=c[i], 3>c[j];
     0,1,2 is 3

     0=c[i],  0>c[j];
     none

     1=c[i], -1>c[j];
     none

     2=c[i], -2>c[j];
     node

     hence the answer is 4+3 =7;
     
***/
#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define mk(a,n,type) type *a= new type[n];
#define ll long long 
int main()
{
    fi fo
    int n;
    cin>>n;
    mk(a,n,int)
    mk(b,n,int)
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    mk(c,n,int)
    for(int i=0;i<n;i++)c[i]=b[i]-a[i];
    sort(c,c+n);
    ll ans=0;
    for(int i=0;i<n;i++)
     {
        cout<<lower_bound(c+i+1,c+n,-c[i])-c<<" ";
        cout<<i+1<<endl;
       ans+=(lower_bound(c+i+1,c+n,-c[i])-c)-(i+1);
     }
    cout<<ans<<endl;
}