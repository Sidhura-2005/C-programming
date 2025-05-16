#include <stdio.h>

int main()
{
  int x;
  scanf("%d",&x);
  int rev=0;
  while (x>0)
  {
      int a =x%10;
      rev=rev*10+a;
      x/=10;
  }
    
    printf("%d\n",rev);

    return 0;
}