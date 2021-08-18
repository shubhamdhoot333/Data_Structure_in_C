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
    int row2,col2;
   printf("Matrix 2 \n");
  printf("Enter the  number of row in matrix 2");
  scanf("%d",&row2);
  printf("Enter the  number of col in matrix 2");
  scanf("%d",&col2);
  int arr2[row2][col2];
  for(i=0;i<row2;i++)
  {
      for(j=0;j<col2;j++)
      {
         scanf("%d",&arr2[i][j]); 
      
      }
  }
int mul[row][col],k;
printf("multiply of the matrix=\n");    
for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
mul[i][j]=0;    
for(k=0;k<col;k++)    
{    
mul[i][j]+=arr[i][k]*arr2[k][j];    
}    
}    
}

for(i=0;i<row;i++)    
{    
for(j=0;j<col;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}   
    getch();
}  