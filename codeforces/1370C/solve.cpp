
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     Ashishgup and FastestFinger plays a game
     The game is stopped when a player can't take any move
     there are two moves
     1) if n is odd and it has odd divisor greater than 1 then divide by the odd divisor
     2) if n is greater than 1 then subtract 1 from it.
     the player who unable to make a move loses the game
     given a number n tell us who is the winner 
     while both of them play optimally.
     Ashishgup will play first
     constrain :
     1<= n <= 10^9



***/
/***
 
     logic :
     1st observation is that 
     if the number is odd then n is the odd divisor
     we can divide n/n then we get 1 and the other player 
     won't get a chance to play
     but when n=1 it is the case when 1st player can't make a move
     so if n is odd and n!=1 then ashsishgup wins
     if n==1 then fastestfinger wins
     then if the number is even
     2^k 
     if we found 2^k there will be no odd divisor
     so we have to minus 1 first and then we will 
     get odd number then apply 1st observation
     so in this case FastestFinger will win 
     technique to check that a number is in the form of
     2^k is to check that (n&(n-1))==0? yes : no  
     but if n=2 then ashishgup will win
     another case
     2.p
     if p is a prime then FastestFinger wins as 1st observation
     else p is an composite and
     p canbe represented by primes so there will be odd divisors
     and in this case ashishgup will always win

***/
#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];

bool isprime(int n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
   fi fo
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)cout<<"FastestFinger\n";
        else if(n%2==1||n==2)cout<<"Ashishgup\n";
        else if((n&(n-1))==0)cout<<"FastestFinger\n";
        else 
        {
            n/=2;
            if(isprime(n))cout<<"FastestFinger\n";
            else cout<<"Ashishgup\n";
        }
       

    }
}
