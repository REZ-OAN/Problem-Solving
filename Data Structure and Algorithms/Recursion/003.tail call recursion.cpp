#include<bits/stdc++.h>
using namespace std;
int x=1;
void fun(int n)
{
    if(n==0)return ;
    x*=n;
    fun(n-1);
}
int main()
{
    fun(5);
    cout<<x<<endl;
    x=1;
    fun(2);
   cout<<x<<endl;
}