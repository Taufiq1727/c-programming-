#include<stdio.h>
 int main()
 {
     int arr[5] = {10,20,30,40,50};
     int i,key,j;

     printf("enter number:");
     scanf("%d ", arr[5]);
     for(i=0;i<5;i++)
     {
        key=arr[i];
     j=i-1;
     while(j>=0 &&arr[j]>key)
     {
         arr[j+1]=arr[j];
         j=j-1;
     }
     arr[j+1]=key;
 }
 printf("sorted array:\n");
 for(i=0;i<5;i++)
    printf("%d\n",arr[i]);
 return 0;
 }
