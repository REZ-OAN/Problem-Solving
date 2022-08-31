#include<bits/stdc++.h>
using namespace std;
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun1(n-1);
    }
    return ;
}
void fun1_(int n)
{
    if(n==0)return ;
    cout<<n<<" ";
    fun1_(n-1);
}
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<" ";
    }
    return ;
}
void fun2_(int n)
{
    if(n==0)return ;
    fun2_(n-1);
    cout<<n<<" ";
}
int main()
{
    fun1(4);
    cout<<endl;
    fun1_(4);
    cout<<endl;
    fun2(5);
    cout<<endl;
    fun2_(5);
    cout<<endl;

}