//Swap two numbers without variables
#include <stdio.h>

int main()
 {
   int a, b;

   a = 11;
   b = 99;

   printf("Values before swapping - \n a = %d, b = %d \n\n", a, b);

   a = a + b;  // ( 11 + 99 = 110)
   b = a - b;  // ( 110 - 99 = 11)
   a = a - b;  // ( 110 - 11 = 99)

   printf("Values after swapping - \n a = %d, b = %d \n", a, b);
}
//OUTPUT:
Values before swapping -
 a = 11, b = 99

Values after swapping -
 a = 99, b = 11
