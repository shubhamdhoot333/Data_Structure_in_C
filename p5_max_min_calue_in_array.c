#include<stdio.h>   // define the header file  
#include<conio.h>

void main()         // define the main function  
{    int i,n,max,min;  
     printf("Enter size of array");
     scanf("%d",&n);       
     int arr[n];
    printf("Enter the array value");
    for(i=0;i<n;i++)
    {
        printf("Enter value");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        max=arr[0];
        min=arr[0];
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
        printf("max value %d",max);
        printf("min value %d",min);
    getch();
}  