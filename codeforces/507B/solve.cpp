
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
     given the radius of the circle and current center
     we have to move the circle to the given center
     by rotating it 180 degree
     in minimum number of steps
     constrain :
     1<= r <= 10^5
     -10^5 <= x,y,x1,y1 <= 10^5


***/
/***
 
     logic :
      if we add circle from corner 
      we get the ans
      illustrate the given test cases you will 
      see one rotate cause 2*r step
      so going to (x1,y1) from (x,y)
      will cause    ceil(distance(x,y,x1,y1)/2*r);
***/
#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
int main()
{
    fi fo
    long long r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    x=(x-x1)*(x-x1)*1LL;

    y=(y-y1)*(y-y1)*1LL;
    
    double p=sqrt(x+y);
    
 

    p = p/(2.0*r);

    cout<<ceil(p)<<endl;
}