#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20], a[20];    
  printf("Enter strings: ");    
  scanf("%s %s", str, a);    
  printf("\nReverse String is: %s %s",strrev(str), a);    
 return 0;    
}    
