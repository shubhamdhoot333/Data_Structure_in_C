#include<stdio.h>   // define the header file  
#include<conio.h>
void main()         // define the main function  
{   
 int i,j,row,col;
  printf("Matrix 1 \n");
  printf("Enter the  number of row in matrix 1");
  scanf("%d",&row);
  printf("Enter the  number of col in matrix 1");
  scanf("%d",&col);
  int arr[row][col];
  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
         scanf("%d",&arr[i][j]); 
      
      }
  }

  for(i=0;i<row;i++)
  {
      for(j=0;j<col;j++)
      {
         printf("%d",arr[i][j]); 
      }
      printf("\n");
  }  
    getch();
}  