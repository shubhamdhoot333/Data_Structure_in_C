#include<stdio.h> // define the header file  
#include<conio.h>

void main()   // define the main function  
{  
    int arr[100],i,size,val,loc;
    printf("Enter your array size ");
    scanf("%d",&size);
   //enter the element of array
    for(i=0;i<size;i++)
    {
        printf("Enter element of array");
        scanf("%d",&arr[i]);    
    }
    printf("enter the element value");
    scanf("%d",&val);
    printf("enter the location ");
    scanf("%d",&loc);
        for(i=size;i>=0;i--)
        {
            if(i==loc)
            {
                arr[loc]=val;
                break;
            }
            
            arr[i]=arr[i-1];
           
        }
            
    //it show the enetered element 
    printf("your entered array");
    for(i=0;i<=size;i++)
    {
        printf("%d",arr[i]);
        
    }

    getch();
}  