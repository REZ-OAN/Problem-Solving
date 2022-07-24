#include<bits/stdc++.h>
using namespace std;
#define fi freopen("input.txt","r",stdin);
#define fo freopen("output.txt","w",stdout);
#define ll long long
#define mk(a,n,type) type *a= new type[n];
#define for0(a,n) for(int i=a;i<n;i++)
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
#define Node struct node
///defining a node
struct node{
     int data;
     Node *next;
};
bool isempty(Node* p){
  return p==NULL;
}
int main()
{
    fi fo
    ///creating a node
    Node *p;
    ///assigning address of the new node
    p=(Node*)malloc(sizeof(Node));
    ///accessing the data
    p->data=10;
    ///linking to the next node
    p->next=NULL;
    ///checking a node is linking to another or not
    if(isempty(p))cout<<"NULL"<<endl;
    else cout<<"FULL\n";

}
