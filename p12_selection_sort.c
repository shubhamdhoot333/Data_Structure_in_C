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
    //selection sort method
    int pos;
    for(i=0;i<(size-1);i++)
    {
        pos=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[pos]>arr[j])
            {   pos = j; }
        } 
            if(pos!=i)
            {
                temp=arr[i];
                arr[i]=arr[pos];
                arr[pos]=temp;
            }       
    }
    
for(i=0;i<size;i++)
{
    printf("%d",arr[i]);
}
    getch();
}  