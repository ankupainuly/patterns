#include <stdio.h>
int main()
{
  for(int i=0;i<5;i++)
  {
      int b=5-i;
      for(int j=0;j<i;j++)
      printf("  ");
      for(int j=1;j<=b;j++)
      printf("%d ",j);
      for(int j=b-1;j>0;j--)
      printf("%d ",j);
      printf("\n");
  }
}
