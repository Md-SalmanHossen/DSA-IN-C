#include<stdio.h>
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
};

void descOrder(int arr[],int size){
    for(int i=1;i<size;i++){
        int t=arr[i];
        int j=i-1;

        while(j>=0 && t>arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
}

int main()
{

    int arr[]={10,5,15,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("before the sorting in desc order: \n");
    printArray(arr,size);

    descOrder(arr,size);
    printf("\nafter sorting : \n");
    printArray(arr,size);

    return 0;
}