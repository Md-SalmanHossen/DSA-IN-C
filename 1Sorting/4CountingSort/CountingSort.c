
#include<stdio.h>
void countingSort(int arr[],int size){

   //find the maximum element
   int max=arr[0];
   for(int i=1;i<size;i++){
      if(arr[i]>max) max=arr[i];
   }

   //create count array(size=max+1) and initialize to 0
   int count[max+1];
   for(int i=0;i<=max;i++){
      count[i]=0;
   }

   //store count of each element
   for(int i=0;i<size;i++){
      count[arr[i]]++;
   }

   //modify count array to store cumulative sum
   for(int i=1;i<=max;i++){
      count[i]+=count[i-1];
   }

   //output array to store sorted elements
   int output[size];

   //build the sorted array in stable order
   for(int i=size-1;i>=0;i--){
      output[count[arr[i]]-1]=arr[i];
      count[arr[i]]--;
   }

   //copy the sorted array back to original array
   for(int i=0;i<size;i++){
      arr[i]=output[i];
   
   }
}
void printArray(int arr[],int size){
   for(int i=0;i<size;i++){
      printf("%d ",arr[i]);
   }
   printf("\n");
}

int main()
{
   int arr[]={4,55,55,8,22,22,1};
   int size=sizeof(arr)/sizeof(arr[0]);

   printf("original array: ");
   printArray(arr,size);

   countingSort(arr,size);
   printf("sorted array: ");
   printArray(arr,size);

   return 0;
}