#include <std1ib.h>
#include <time.h>
#include <stdio.h>
/** more headers goes there */

/**
 * main - Entry point
 * Description - Points if random generated number is +tive, zero or -tive
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
print("%d is positive\n", n);
return (0);
}
