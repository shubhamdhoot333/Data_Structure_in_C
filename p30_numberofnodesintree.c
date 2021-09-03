#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *left,*right;
}node;
/*this code run only for create root node  */
 node *create(){
     int val;
     node *temp;
     printf("Enter data");
     scanf("%d",&val);
     temp =(node *)malloc(sizeof(node));
     temp->data=val;
     temp->left = temp->right = NULL;
     return temp; 
 }

/* this code run for all node creation */
void insert(node *root , node *temp)
{
    /* this code run for left node */
    if(temp->data<root->data)
    {
        if(root->left!=NULL)
                insert(root->left,temp);
         else
              root->left = temp;       
    }
    /* this code run for right node */
    if(temp->data>root->data)
    {
        if(root->right!=NULL)
                insert(root->right,temp);
         else
              root->right = temp; 

    }
}
void preorder(node *root){
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int height(node *root)
{
    // Base case: empty tree has a height of 0
    if (root == NULL) {
        return 0;
    }
 
    // recur for the left and right subtree and consider maximum depth
int left_side;
int right_side;
left_side = height(root-> left);
right_side = height(root-> right);
if(left_side > right_side)
{
return left_side + 1;
}
else
{
return right_side + 1;
}
}
static int count = 0;
int countnodes(struct node *root)
{
    if(root != NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;
}


void main()
{
        char ch;
        node *root=NULL,*temp;
        do{
            temp=create();
            if(root==NULL)
            {
                root=temp;
            }
            else{
                insert(root,temp);
            }
                printf("Want more Y/N");
                getchar();
                scanf("%c",&ch);
            
        }while(ch=='y' || ch=='Y');
        preorder(root);
       printf(" \n %d height of tree ",height(root));
       printf(" \n %d total node in a tree ",countnodes(root));
    getch();
}