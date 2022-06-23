
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     Given a number 'n' you have to print the pattern
     n= 3
           0
         0 1 0
       0 1 2 1 0
     0 1 2 3 2 1 0
       0 1 2 1 0
         0 1 0
           0


***/
/***
 
     logic :
       Just Impliment triangle patterns 
       and be careful with the spaces 

***/
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
     for(int i=0;i<=n;i++)
     {
        for(int j=0;j<=n-i-1;j++)
        cout<<"  ";
        for(int j=0;j<=i;j++)
        {
        	if(j!=0)
             cout<<" "<<j;
         else cout<<j;
        }
        for(int j=i-1;j>=0;j--)
        {
        	cout<<" "<<j;
        }
 
        cout<<"\n";
     }
      for(int i=n-1;i>=0;i--)
     {
        for(int j=0;j<=n-i-1;j++)
        cout<<"  ";
        for(int j=0;j<=i;j++)
        {
        	if(j!=0)
             cout<<" "<<j;
         else cout<<j;
 
        }
        for(int j=i-1;j>=0;j--)
        {
        	cout<<" "<<j;
        }
 
        cout<<"\n";
     }
}