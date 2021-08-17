#include<stdio.h>   // define the header file  
#include<conio.h>
void main()         // define the main function  
{    int i,n,val,loc,count=0;  
     printf("Enter size of array");
     scanf("%d",&n);       
     int arr[n];
    printf("Enter the array value");
    for(i=0;i<n;i++)
    {
        printf("Enter value");
        scanf("%d",&arr[i]);
    }
   printf("enter the search element value");
   scanf("%d",&val);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            loc=i;
            count=count+1;
            break;
        }
        
    }
    loc=loc+1;
    if(count>0)
    {
        printf("value found in %d",loc);
    }
    else{
        printf("value not found");
    }       
    getch();
}  