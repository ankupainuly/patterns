#include <stdio.h>
int main()
{
  for(int i=0;i<4;i++)
  {
      int b=4-i;
      for(int j=1;j<=b;j++)
      printf("  ");
      for(int j=1;j<=i+1;j++)
      printf("* ");
      for(int j=i;j>0;j--)
      printf("* ");
      printf("\n");
  }
  for(int i=0;i<5;i++)
  {
      int b=5-i;
      for(int j=0;j<i;j++)
      printf("  ");
      for(int j=1;j<=b;j++)
      printf("* ");
      for(int j=b-1;j>0;j--)
      printf("* ");
      printf("\n");
  }
}
