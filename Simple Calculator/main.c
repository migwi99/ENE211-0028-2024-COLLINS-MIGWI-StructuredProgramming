#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2;
   printf("Please enter the first number: ");
   scanf("%d", &num1);

   printf("Please enter the second number: ");
   scanf("%d", &num2);

   int sum= num1 + num2;
   int difference= num1 - num2;
   int multiplication= num1 * num2;
   int division= num1 / num2;
   int modulus=num1 % num2;

   printf("Sum= %d\n", sum);
   printf("Multipliction= %d\n", multiplication);
   printf("Division= %d\n", division);
   printf("Modulus= %d\n", modulus);



    return 0;
}
