#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int Last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
Last_digit = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, Last_digit);
}
return (0);
}
