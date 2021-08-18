#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *pre;
    int data;
    struct node *next; 
};
struct node * head;
void binsert(){
    int val;
   struct node * ptr;
    ptr=(struct node *)malloc(sizeof( struct node * ));
    if(ptr==NULL)
    {
        printf("overflow");
    }
    else{
        printf("enter data");
        scanf("%d",&val);
        if(head==NULL)
        {
            ptr->pre=NULL;
            ptr->data=val;
            ptr->next=NULL;
            head=ptr;
        }
        else{
            ptr->pre=NULL;
            ptr->data=val;
            ptr->next=head;
            head->pre=ptr;
            head=ptr;
        }
         printf("\nNode inserted\n");  
    }

}
void einsert(){
       struct node *ptr,*temp;  
   int item;  
   ptr = (struct node *) malloc(sizeof(struct node));  
   if(ptr == NULL)  
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
       printf("\nEnter value");  
       scanf("%d",&item);  
        ptr->data=item;  
       if(head == NULL)  
       {  
           ptr->next = NULL;  
           ptr->pre = NULL;  
           head = ptr;  
       }  
       else  
       {  
          temp = head;  
          while(temp->next!=NULL)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->pre=temp;  
          ptr->next = NULL;  
          }  
             
       }  
     printf("\nnode inserted\n");  
}
void bdelete(){
     struct node *ptr; 
      if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
     else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }   
      else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> pre = NULL;  
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
}
void edelete(){
          struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
     else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);   
        printf("\nnode deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> pre -> next = NULL;   
        free(ptr);  
        printf("\nnode deleted\n");  
    }  

}
void display(){
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->data);  
        ptr=ptr->next;  
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