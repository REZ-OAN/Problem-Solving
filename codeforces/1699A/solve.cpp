
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given a number n
     you have to represent it in a way 
     that (a^b)+(b^c)+(c^a)=n
     if there is no such a,b,c then print -1
     there can be multiple a,b,c can form n
     constrain :
     1<=  n <= 10^9
     0<= a,b,c <= 10^9
***/
/***
 
     logic :
     here is an observation
     that if n is odd then we can't make it so print -1
     if n even then the ans can be
     0 n/2 n/2
     or 
     1 1 (n/2)^1

     first answer 
     is 
     a^a=0
     a^0=a
     second is
     a=(n/2)^1
     a^1=n/2 this will encounter twice then we get n
     1^1=0


***/

#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];

int main()
{
    fi fo
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n&1)cout<<"-1"<<endl;
        else 
        {
            n/=2;
            cout<<"1 1 "<<(n^1)<<endl;
        }
        }

}




