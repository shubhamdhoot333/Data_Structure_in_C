#include<stdio.h>   // define the header file  
#include<conio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

void main()         // define the main function  
{   
    int i,size,val;
    printf("Enter size of array");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
      printf("Enter Value");
      scanf("%d",&arr[i]);
    } 
    printf("Enter number want to search");
    scanf("%d",&val);
    int result = binarySearch(arr, val, 0, size-1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    

    getch();
}  