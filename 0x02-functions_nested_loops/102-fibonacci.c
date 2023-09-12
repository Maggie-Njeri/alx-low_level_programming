#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
* Return: Always 0.
*/

int main(void)
{
unsigned long int fib1 = 0;
unsigned long int fib2 = 1;
unsigned long int next;
int count;
for (count = 0; count < 50; count++)
{
next = fib1 + fib2;
printf("%lu", next);
fib1 = fib2;
fib2 = next;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
