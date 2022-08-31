#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x=1;
    if(n==0)return 1;
     x= fun(n-1);
   return   x*=n;

}
int main()
{
         cout<<fun(10)<<endl;
}