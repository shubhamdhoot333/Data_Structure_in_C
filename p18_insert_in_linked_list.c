#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
//binsert
void binsert()
{
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr==NULL)
    {
         printf("\nOVERFLOW");  
    }
    else
    {
        printf("\nEnter value\n");    
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nNode inserted");     
    }    
}
//einsert
void einsert()
{
    struct node * ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("/n overflow");
    }
    else
    {
        printf("enter item");
        scanf("%d",&item);
        ptr->data=item;
         if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }
          else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }    

    }
}
//display
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
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
              
void main()
{
    int ch;
    while(ch!=3)
    {
    printf("1.insert at begning \n 2.insert at ending \n 3.exit");
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
        display();
        break;
        case 4:
        exit(0);
        break;  
            default:  
            printf("Please enter valid choice..");    
    }
    }


    getch();
}