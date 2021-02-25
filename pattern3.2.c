#include <stdio.h>
int main()
{
  for(int i=0;i<5;i++)
  {
      int b=5-i;
      for(int j=5-i;j>0;j--)
      printf("* ");
      for(int j=1;j<b;j++)
      printf("  ");
      printf("\n");
  }
}
