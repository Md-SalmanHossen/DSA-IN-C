#include<stdio.h>

void reverseArray(int arr[],int size){
   printf("reverse array: ");
   for(int i=size-1;i>=0;i--){
      printf("%d ",arr[i]);
   }
}

int main()
{
   int size;
   printf("Enter your array size: ");
   scanf("%d",&size);

   //declare array
   int arr[size];

   printf("Enter %d elements: \n",size);
   for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
   }

   reverseArray(arr,size);

   return 0;
}