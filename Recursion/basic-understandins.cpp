#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
const int m=1000000007;
template<typename T>
bool isprime(T n)
{
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

ll bigmod(ll b,ll p)
{
    ll res;
    if(p==0)res=1;
    else if(p%2)
    {
        res=((b%m)*(bigmod(b,p-1)%m))%m;
    } 
    else 
    {
        res=bigmod(b,p/2);
        res=((res%m)*(res%m))%m;
    }
    return res;
}
///recursion
//in this function no base case
//the function will infinitely called
//so will occur stackoverflow
/**
void foo()
{
    foo();
    cout<<"Foo"<<endl;
}
void foo(int n){
    foo(n-1);
    cout<<n<<endl;
}
**/
//calling the function after doing the work
//when it's time for return it will not do anything
void foo(int n)
{
    if(n==0)return;
    cout<<n<<" ";
    foo(n-1);
}
/**
  call for n=4
  foo(4)
    |
    ---> this will print 4 and then call
  foo(3)
    |
    ---> this will print 3 and then call
  foo(2)
    |
    ---> this will print 2 and then call
  foo(1)
    |
    ---> this will print 1 and then call
  foo(0)
    |
    ---> in this process function will back to the caller function
  foo(0) returns to foo(1) 
  after that function call we have nothing to do
  so foo(1) returns to foo(2)
  similarly foo(2) returns to foo(3)
  similarly foo(3) returns to foo(4)
  and foo(4) returns to main()
  then do the rest
  **/
void boo(int n){
    if(n==0)return;
    boo(n-1);
    cout<<n<<" ";
}
/**
   call boo(4)
   boo(4)
   |
   ---> nothing to do before call so boo(4) will call
   boo(3)
   |
   ---> nothing to do before call so boo(3) will call
   boo(2)
   |
   ---> nothing to do before call so boo(2) will call
   boo(1)
   |
   ---> nothing to do before call so boo(1) will call
   boo(0)
   |
   ---> in this case function will return to it's caller function
   boo(0) returns to boo(1) something is left to do it is print n so it will print 1
   boo(1) returns to boo(2) something is left to do it is print n so it will print 2
   boo(2) returns to boo(3) something is left to do it is print n so it will print 3
   boo(3) returns to boo(4) something is left to do it is print n so it will print 4
   then boo(4) returns to it's caller which in main()
   */
  //array sum
  int s=0;
   int sum(int a[],int n)
   {
    
         if(n<0)return  0;
         else return  a[n]+sum(a,n-1);
   }
   //digit sum
int f(int n)
{
    if(n==0)return 0;
    return n%10+f(n/10);
}
int main()
{
    
    fi fo
    int n;
    cin>>n;
    cout<<"Reverse : ";
    foo(n);
    cout<<endl;
    cout<<"Normal : ";
    boo(n);
    cout<<endl;
    mk(a,n,int);
    for0(0,n)cin>>a[i];
    cout<<sum(a,n-1)<<endl;
    cout<<f(1234)<<endl;
    return 0;
   
}
