#include <stdio.h>
#include <stdlib.h>
/**
*main - prints numbers form 1 to 100
* multiples of three print Fizz
* multiples if five print Buzz
* Return: nothing
*/
void main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (((n % 3) == 0) && ((n % 5) == 0))
printf(" FizzBuzz");
else if (n % 5 == 0)
printf(" Buzz");
else if (n % 3 == 0)
printf(" Fizz");
else
printf(" %d", n);
}
putchar('\n');
return (0);
}
