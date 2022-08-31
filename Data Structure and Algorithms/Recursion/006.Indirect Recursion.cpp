#include<bits/stdc++.h>
using namespace std;
void fun1(int n);
void fun(int n);
void fun(int n)
{
   if(n>0)
   {
    cout<<n<<" "; 
    fun1(n-1);
 
   }

}
void fun1(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        fun(n/2);
    }
}
int main()
{
         fun(8);
         cout<<endl;
}