#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
 int item;
 struct node *next; 
};
struct node *head;
void binsert()
{
    int val;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)  
    {
      printf("overflow");      
    }
    else{
        printf("enter item value");
        scanf("%d",&val);
        ptr->item=val;
        ptr->next=head;
        head=ptr;
        printf("\nNode inserted");  
    }


}
void einsert()
{
 int val;
    struct node *ptr,*temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)  
    {
      printf("overflow");      
    }
    else{
        printf("enter item value");
        scanf("%d",&val);
        ptr->item=val;
        temp=head;
        while(temp->next!=NULL)
        {
            temp= temp->next;
        }
        temp->next=ptr;
        ptr->next =NULL;
        printf("\nNode inserted");  

    }
}
void bdelete()
{
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else{
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }
}
void edelete()
{
    struct node *ptr ,*ptr1;
    if(head==NULL)
    {
          printf("\nlist is empty");  
    }
    else if(head->next==NULL)
    {
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }
    else{
          ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        } 
             ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");       
    }
}
void display()
{
   struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->item);  
            ptr = ptr -> next;  
        }  
    }  
}


void main()
{
    int ch;
    printf("1.insert begning \n 2.insert ending \n 3.delete begning \n 4.delete endling \n 5.display \n 6.exit \n ");
    while(ch!=6)
    {
        printf("enter item choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            binsert();
            break;
            case 2:
            einsert();
            break;
            case 3:
            bdelete();
            break;
            case 4:
            edelete();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("please enter valied choise");
        }
    }
    getch();
}