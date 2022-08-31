#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    static int x=0;
    if(n<0)return  0;
    x++;
    return fun(n-1)+x;
}
int main()
{
    cout<<fun(5)<<endl;

}