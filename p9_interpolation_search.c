#include<stdio.h>   // define the header file  
#include<conio.h>

int interpolationSearch(int a[], int low, int high, int val) {
  // Repeat until the pointers low and high meet each other
    int mid;
     while (low <= high) {
     mid = low + (high - low)*((val -a[low])/(a[high] - a[low])) ;

    if (a[mid] == val)
      return mid;

    if (val<a[mid])
      high = mid - 1;
    else
      low = mid + 1;
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
    int result = interpolationSearch(arr,0, size-1,val);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    

    getch();
}  