#include <stdio.h>
int main()
{
  for(int i=0;i<5;i++)
  {
      int b=5-i;
      for(int j=1;j<b;j++)
      printf("  ");
      for(int j=1;j<=i+1;j++)
      printf("* ");
      printf("\n");
  }
}
