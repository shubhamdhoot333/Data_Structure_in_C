#include<stdio.h>   // define the header file  
#include<conio.h>
void main()         // define the main function  
{   
    int i,j,size,val,temp;
    printf("Enter size of array");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
      printf("Enter Value");
      scanf("%d",&arr[i]);
    } 
    //bubble sort method
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
for(i=0;i<size;i++)
{
    printf("%d",arr[i]);
}
    getch();
}  