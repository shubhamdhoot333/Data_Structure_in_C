#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;   
};
struct node *head;
void binsert(){
    int val;
  struct node *ptr,*temp;
  ptr=(struct node *)malloc(sizeof(struct node *));
  if(ptr==NULL)
  {
    printf("overflow");  
  }
  else{
      printf("enter value");
      scanf("%d",&val);
      ptr->data=val;
      if(head==NULL)
      {
          ptr->next=head;
          head=ptr;
      }
      else{
          temp=head;
          while(temp->next==head)
          {
              temp=temp->next;
          }
          ptr->next=head;
          temp->next=ptr;
          head=ptr;
          printf("\nnode inserted\n");             
      }  
  }
}
void linsert()
{
  int val;
  struct node *ptr,*temp;
  ptr=(struct node *)malloc(sizeof(struct node *));
  if(ptr==NULL)
  {
    printf("overflow");  
  }
  else{
      printf("enter value");
      scanf("%d",&val);
      ptr->data=val;
      if(head==NULL)
      {
          ptr->next=head;
          head=ptr;
      }
      else
      {
          temp=head;
          while(temp->next==head)
          {
              temp=temp->next;
          }
          temp->next=ptr;
          ptr->next=head;
      }
           printf("\nnode inserted\n");  
  }  
}
void bdelete()
{
     struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }
      else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }      

}
void ldelete()
{
      struct node *ptr, *preptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");   
    }
     else   
    {  
        ptr = head;  
        while(ptr->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted\n");  
  
    }  

}
void show()
{
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr->next!=head)  
        {  
          
            printf("%d\n", ptr->data);  
            ptr = ptr->next;  
        }  
        printf("%d\n", ptr->data);  
    }  
   

}
void main()
{
    int ch=0;
    
    while(ch!=6)
    {
       printf("enter your choise");
        scanf("%d",&ch);
        switch(ch)
        {
          case 1:
          binsert();
          break;
          case 2:
          linsert();
          break;
          case 3:
          bdelete();
          break;
          case 4:
          ldelete();
          break;
          case 5:
          show();
          break;
          case 6:
          exit(0);
          break;
          default:
           printf("please enter valied choose");

        }
    }
    getch();
}