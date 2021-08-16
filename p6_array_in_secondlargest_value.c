#include<stdio.h>   // define the header file  
#include<conio.h>
#include <limits.h> // For INT_MIN
void main()         // define the main function  
{    int i,n,max1,max2;  
     printf("Enter size of array");
     scanf("%d",&n);       
     int arr[n];
    printf("Enter the array value");
    for(i=0;i<n;i++)
    {
        printf("Enter value");
        scanf("%d",&arr[i]);
    }
    max1=max2=INT_MIN;
    
    for(i=0;i<n;i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
        printf("max1 value %d",max1);
        printf("max2 value %d",max2);
    getch();
}  