#include<stdio.h>

void printArray(int arr[],int size){
   for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
   }
   printf("\n");
}

void insertionSort(int arr[],int size){

   for(int i=1;i<size;i++){
      int temp=arr[i];
      int j=i-1;
       // Compare temp with each element on the left of it until an element smaller than
      // it is found.
      // For descending order, change key<array[j] to key>array[j].
      
      while(j>=0 && temp<arr[j]){
         arr[j+1]=arr[j];
         j--;
      }

      arr[j+1]=temp;
   }
}
int main()
{
   int arr[]={34,546,67,435,878,222,1,0};
   int size=sizeof(arr)/sizeof(arr[0]);

   printf("Before Sorting : \n");
   printArray(arr,size);

   insertionSort(arr,size);
   printf("Sorted array in ascending order: \n");
   printArray(arr,size);

   return 0;
}