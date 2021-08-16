#include<stdio.h>   // define the header file  
#include<conio.h>

void main()         // define the main function  
{  
    int arr[100],i,j,size,temp=0,time;
    printf("Enter your array size ");
    scanf("%d",&size);
                    //enter the element of array
    for(i=0;i<size;i++)
    {
        printf("Enter element of array");
        scanf("%d",&arr[i]);    
    }
     //reverse logic
   printf("your entered array");

    for(i=size-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }        
    

    getch();
}  