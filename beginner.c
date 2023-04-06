#include <stdio.h>

int main()
{
  int x;
  float f;
  char ch;
   
  printf("Enter any Integer: ");
  scanf("%d", &x);
  printf("\n");
  
  printf("Enter any Floating Point: ");
  scanf("%f", &f);
  printf("\n");
  
  printf("Enter any Character: ");
  scanf("%c", &ch);
  printf("\n");
  
  printf("Integer: %d\nFloat: %f\n  Character: %c\n", x, f, ch);
    
  return 0;
}
