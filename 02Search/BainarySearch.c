#include<stdio.h>
int BinarySearch(int arr[],int left,int right,int target){
   while(left<=right){

      int mid=left+(right-left);
      
      if(arr[mid]==target) return mid;
      if(arr[mid]>target) right=mid-1;
      else left=mid+1;
   }

   return -1;
}
int main(){
   int arr[]={10,20,30,40,50,60,70};
   int n=sizeof(arr)/sizeof(arr[0]);

   int target=30;
   int result=BinarySearch(arr,0,n-1,target);

   if(result !=-1) printf("element found at index %d\n",result);
   else printf("Element not found");

   
   return 0;
}