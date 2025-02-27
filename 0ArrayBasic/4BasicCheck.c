#include<stdio.h>
int fun(int n){

   if(n==1) return 1;
   else return 1 + fun(2-1);
   
}
int main()
{
   int n=2;
   printf("%d",fun(n));
   return 0;
}