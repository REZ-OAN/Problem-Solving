
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given a number you have to find that 
     if that number is a sum of
     11,111,1111,11111..... numbers(any number of times)
     like 
     33 =11 + 11 + 11
     144= 111 + 11 + 11 + 11
     if the number canbe represented by those number
     then print yes
     otherwise no
     constrain :
     1<= n <= 10^9



***/
/***
 
     logic :
      look carefully 
      1111=11*101
      11111=111*100 + 1*11;
      that means every number that is in the form of
      a*11 + b*111  the numbers can be represented like the description
      if n==a*11+b*111
      then yes otherwise no


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
        if(n<11)cout<<"NO\n";
        else
        {
           int a=0,b=0;
           while(1)
           {
            if(n-a*11<0)break;
            else
            {
                int k=n-a*11;
                if(k%111==0)
                {
                    b=k/111;
                    break;
                }
                else a++;
            }
           }
         if(n==(a*11 + b*111))cout<<"YES\n";
         else cout<<"NO\n";
        }

    }
}
