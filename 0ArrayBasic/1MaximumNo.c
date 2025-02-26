#include<stdio.h>

void findMax(int arr[],int size){

   int max=arr[0];
   
   for(int i=1;i<=size;i++){
      if(arr[i]>max) max=arr[i];
   }

   printf("max number: %d\n",max);
}

int main()
{

   int arr[]={1,2,3,4,5,79,67,45};
   int size=sizeof(arr)/sizeof(arr[0]);

   findMax(arr,size);
   return 0;
}