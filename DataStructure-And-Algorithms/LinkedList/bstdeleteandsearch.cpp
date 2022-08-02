#include<bits/stdc++.h>
using namespace std;
struct node{
   int d;
   struct node *left;
   struct node *right;
};

struct node* create_node(int item)
{
   struct node *new_node=(struct node*)malloc(sizeof(struct node));
   new_node->d=item;
   new_node->left=NULL;
   new_node->right=NULL;
return new_node;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->d<<" ";
        inorder(root->right);
    }


}
struct node *insert_(struct node *node,int item)
{
    if(node==NULL)return create_node(item);
    if(item<node->d)node->left=insert_(node->left,item);
    else node->right=insert_(node->right,item);
    return node;

};
struct node *search_tree(struct node *root,int item)
{
    if(root==NULL){cout<<"NOT FOUND\n";return root;}
    if(root->d>item){search_tree(root->left,item);}
    else if(root->d<item){search_tree(root->right,item);}
    else if (root->d==item){cout<<"FOUND\n";return root;}
};
struct node *inorder_search(struct node *root,int item,int &c)
{
    if(root!=NULL){
    inorder_search(root->left,item,c);
    c++;
    if(root->d==item){cout<<"FOUND AT "<<c<<endl;return root;}
    inorder_search(root->right,item,c);}
    return root;
};
struct node *What_will_next_Node(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;

  return current;
}
struct node *delete_node(struct node *root, int item) {

  if (root == NULL) return root;


  if (item < root->d)
    root->left = delete_node(root->left,item);
  else if (item > root->d)
    root->right = delete_node(root->right, item);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct node *temp =What_will_next_Node(root->right);
    root->d = temp->d;
    root->right = delete_node(root->right, temp->d);
  }
  return root;
}
int main()
{

    struct node *root=NULL;

    root=insert_(root,50);

    root=insert_(root,11);

    root=insert_(root,21);

    root=insert_(root,53);

    root=insert_(root,13);

    root=insert_(root,30);

    root=insert_(root,60);

    inorder(root);
    cout<<endl;

    int c=0;
    root=inorder_search(root,21,c);
    root=delete_node(root,21);
    inorder(root);
    cout<<endl;
    c=0;
    root=inorder_search(root,30,c);




}
