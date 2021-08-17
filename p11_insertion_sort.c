#include<stdio.h>   // define the header file  
#include<conio.h>
void main()         // define the main function  
{   
    int i,j,k,size,val,temp;
    printf("Enter size of array");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
      printf("Enter Value");
      scanf("%d",&arr[i]);
    } 
    //insertion sort method
    for(k=1;k<size;k++)
    {
          temp = arr[k];  
          j= k-1;  
           while(j>=0 && temp <= arr[j])  
        {  
            arr[j+1] = arr[j];   
            j = j-1;  
        }  
        arr[j+1] = temp;  
    }
for(i=0;i<size;i++)
{
    printf("%d",arr[i]);
}
    getch();
}  