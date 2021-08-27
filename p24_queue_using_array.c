#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE],front=-1,rear=-1;
void enqueue()
{
  int val;
  printf("enter value");
  scanf("%d",&val);
  if(rear == SIZE-1)
  { 
      printf("queue is full");
  }  
  else{
      if(front == -1 && rear == -1)
      {
             front = 0;  
             rear = 0;  
      }
        else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = val;  
    printf("\nValue inserted ");  
  }
}
void dequeue()
{
  if(front == -1 || front > rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      if(front == rear)
      {
	     front = rear = -1;
      }
       else   
        {  
            front = front + 1;  
        }     
         printf("\nvalue deleted ");  
   }
}
void show(){
     if(rear == -1){
      printf("\nQueue is Empty!!!");
     }
     else{
          int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
     }
}
void main()
{
    int ch=0;
    do{
         printf("\n\n***** MENU *****\n");
         printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
         printf("Enter your choise");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:
             enqueue();
             break;
             case 2:
             dequeue();
             break;
             case 3:
             show();
             break;
             case 4:
             exit(0);
             break;
              default:
              printf("Please enter right choise");
             
         }   
    }while(ch!=4);
    getch();
}