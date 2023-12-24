#include<stdio.h>  
int main()   
{   
  int n1, n2;  
  printf("Enter the value of num1,num2:");  
  scanf("%d %d",&n1,&n2);  
  printf("\nBefore swapping: %d  %d\n",n1,n2);  

  n1 = n1 + n2;   
  n2= n1 - n2;    
  n1 = n1 - n2;  
  
  printf("\nAfter swapping: %d  %d",n1,n2);   
  return 0;   
}  
