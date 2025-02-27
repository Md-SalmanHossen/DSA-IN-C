#include<stdio.h>
void minNumber(int arr[],int size){

   int min=arr[0];
   for(int i=0;i<size;i++){
      if(arr[i]<min) min=arr[i];
   }

   printf("min number : %d",min);

}
int main()
{
   int arr[]={33,44,23,546,23,7,1,0};
   int size=sizeof(arr)/sizeof(arr[0]);
   minNumber(arr,size);
   return 0;
}