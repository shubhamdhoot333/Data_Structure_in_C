#include<stdio.h>   // define the header file  
#include<conio.h>

void main()         // define the main function  
{    int i,n,r,temp,j; //here i and j loop variable,n size of array,r is rotation,temp is value holder variable 
     printf("Enter size of array");
     scanf("%d",&n);       
     int arr[n];
    printf("Enter the array value");
    for(i=0;i<n;i++)
    {
        printf("Enter value");
        scanf("%d",&arr[i]);
    }
    printf("Enter rotation");
    scanf("%d",&r);
      for(i=0;i<r;i++)
      {
        temp=arr[n-1];
        for(j=n-1;j>0;j--)
        {
           arr[j] = arr[j-1];  
        }     
        arr[0] = temp;  
      }  

      for(i=0;i<n;i++)
      {
          printf("%d ", arr[i]); 
      }
    getch();
}  