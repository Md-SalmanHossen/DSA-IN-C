#include<stdio.h>
int linearSearch(int arr[],int size,int target){
   for(int i=0;i<size;i++){
      if(arr[i]==target){
         return i;
      }
   }
   return -1;
}
int main(){
   int arr[]={1,2,3,5,7,8,10,35};
   int n=sizeof(arr)/sizeof(arr[0]);

   int target=35;
   int result=linearSearch(arr,n,target);

   if(result!=-1) printf("Element found at index %d\n",result);
   else printf("element not found\n");

   return 0;
}