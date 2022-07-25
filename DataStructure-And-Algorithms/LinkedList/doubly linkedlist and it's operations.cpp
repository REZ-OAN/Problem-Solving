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
///the node treated as 0 based index
#define Node struct node
void display(Node *head);
Node {
   int d;
   Node *next;
   Node *prev;
};
///creating a node
Node *create_node(int d,Node *prev,Node *next)
{
    Node *new_node=(Node*)malloc(sizeof(Node));
    ///os can allocate space for required node
    if(new_node==NULL)
    {
        cout<<"Couldn't Create A New Node\n";
        exit(1);
    }
    ///assigning data
    new_node->d=d;
    ///assigning the next node address;
    new_node->next=next;
   
    new_node->prev=prev;
    ///update next node prev to point new_node
    if(next!=NULL){next->prev=new_node;}
    return new_node;

}
Node *delete_node(Node *head,int n)
{
      
      int i=0;
      Node *curr_node=(Node*)malloc(sizeof(Node));
      curr_node=head;
      ///going to the node which to be deleted
      while(curr_node!=NULL)
      {
        if(i==n)
        {
            break;
        }
        curr_node=curr_node->next;
        i++;
      }
      /// if we wanna delete the first element on the list
      ///hear head->next will point to the next node of the 1st node of the list
      if(curr_node==head)
      {
        
        curr_node->prev=head;
        head=curr_node->next;
        return head;
      }
      else
      {
        ///when there is no such node to delete
        if(curr_node==NULL)
        {
            return head;
        }
        Node *node;
        node=head;
        ///we need the previous node of the node which to be deleted
        while(node->next!=curr_node)
        {
            node=node->next;
        }
        ///updating previous node next with the deleted node next
        if(curr_node->next==NULL) 
        {
            curr_node->prev->next=NULL;
            return head;
        }
        node->next=curr_node->next;
        curr_node->next->prev=curr_node->prev;
        free(curr_node);
        return head;

      }

}
///size of the list
int list_size(Node *head)
{
    int cnt=0;
    while(head!=NULL)
    {
        head=head->next;
        cnt++;
    }
    return cnt;
}
///print the list 
void display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->d<<" ";
        head=head->next;
    }
    cout<<endl;
}
void displayrev(Node *head){
     while(head->next!=NULL)
     {
      head=head->next;
     }
     while(head!=NULL)
     {
      cout<<head->d<<" ";
      head=head->prev;
     }
}
///push_front like
Node *prepend(Node *head,int d)
{
  Node *new_node=create_node(d,NULL,head);
  return new_node;
}
///push_back like
Node *append(Node *head,int d)
{
    Node *curr_node=head;
    while(curr_node->next!=NULL){curr_node=curr_node->next;}
    ///if there is no element in the list
    ///head next will be pointing to the new node
    if(curr_node==head)
    {
        Node *new_node=create_node(d,head,NULL);
        head->next=new_node;
        return head;
    }
    ///when curr_node is the last node
    Node *new_node=create_node(d,curr_node,NULL);
    curr_node->next=new_node;
    return head;
}

///insert after a node
Node *Insert(Node *head,int d,int n)
{
    Node *curr_node=head;
    int i=0;
    while(curr_node->next!=NULL)
    {
        if(i==n)break;
        curr_node=curr_node->next;
        i++;
    }
    ///if current node is head
    if(curr_node==head)
    {
        Node *new_node=create_node(d,head,head->next);
        head->next=new_node;
        return head;
    }
    ///if current node is the last node
    else if(curr_node->next==NULL)
    {
      Node *new_node=create_node(d,curr_node,NULL);
      curr_node->next=new_node;
      return head;
    }
    ///excluding 0th node and last node
   Node *new_node=create_node(d,curr_node,curr_node->next);
   curr_node->next->prev=new_node;
    curr_node->next=new_node;
    
    return head;

}

///searching in the list
void isfound(Node *head,int data)
{
    bool  k=0;
    int i=0;
      while(head!=NULL)
      { 
        /// not breaking to find next occurrences
        if(head->d==data)
        {
           cout<<"Found at Position "<<i+1<<endl;
           k=1;
        }
        head=head->next;
        i++;
    }
    if(k==0)
    {
        cout<<"Opps Not Found...\n";
    }
}
int main()
{
    fi fo
    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        if(i==0)head=prepend(head,d);
        else head=append(head,d);

    }
    display(head);
    head= delete_node(head,2);
    display(head);
    head=Insert(head,10,0);
    display(head);
    head=Insert(head,11,3);
    display(head);
    head=Insert(head,12,2);
    display(head);
    isfound(head,1);
     return 0;
   
}
