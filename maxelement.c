#include<stdio.h> 
void main() 
{
   int y[30],i,n,max; 
   printf("Enter no of elements that u want to fill the array");
   scanf("%d", &n);  
   for (i=0;i<n;i++)
   {
   scanf("%d", &y[i]);
   }
   max=y[0]; 
   for(i=0;i<n;i++)
   {
      if(y[i]>max)
      {
         max= y[i];
      }
   } 
   printf(" it is the maximum  Element",max); 
  
  }
