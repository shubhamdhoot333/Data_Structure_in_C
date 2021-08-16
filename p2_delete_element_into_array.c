#include<stdio.h>   // define the header file  
#include<conio.h>

void main()         // define the main function  
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

    printf("enter the delete element value");
    scanf("%d",&val);

        for(i=0;i<size;i++)
        {
                        //search value present or not 
           if(arr[i]==val)
           {
               loc=i;
               break;
           }           
        }
                        //check value after other element present or not
        if(loc<size)
        {
            size = size - 1;
            for (int j=loc; j<size; j++)
                arr[j] = arr[j+1];     
        }
            
                //it show the enetered element 
    printf("your entered array");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        
    }

    getch();
}  