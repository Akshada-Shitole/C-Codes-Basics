//EVEN ODD PROGRAM

#include <stdio.h>

int main()
{
   int even = 24;
   int odd  = 31;

   if (even % 2 == 0)
      printf("%d is even\n", even);

   if (odd % 2 != 0 )
      printf("%d is odd\n", odd);

   return 0;
}
//OUTPUT:
24 is even
31 is odd
