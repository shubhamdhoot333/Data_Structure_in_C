#include<conio.h>
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
int data;
struct node *left,*right;
} node;
node *create()
{
  node *p;
  int x;
  printf("enter data (-1 for no data)");
  scanf("%d",&x);
  if(x==-1)
  return NULL;
  p=(node*)malloc(sizeof(node));
  p->data=x;
  printf("enter left child of %d",x);
  p->left=create();
  printf("enter the right child of %d",x);
  p->right=create();
  return p;
}
void preorder(node *t)
{
 if(t!=NULL)
 {
 printf("\n%d",t->data);
 preorder(t->left);
 preorder(t->right);
 }
}
void inorder(node *t)
{
if(t!=NULL)
{
inorder(t->left);
printf("\n%d",t->data);
inorder(t->right);
}
}
void postorder(node *t)
{
if(t!=NULL)
{
postorder(t->left);
postorder(t->right);
printf("\n%d",t->data);
}
}
void main()
{

node *root;
root=create();
printf("treverse the tree in preorder");
preorder(root);
printf(" \n inorder");
inorder(root);
printf(" \n postorder");
postorder(root);
getch();
}