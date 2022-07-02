#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry name
 *
 * Return: always return 0
 */

int main(void)
{
int n;
int lastn;
srand(time(0));
n = rand() - RAND_MAX / 2;
last n = n % 10
if (lastn > 5)
{
printf("Last digit of %d is %d and it is greater than 5\n", n, lastn);
}
else if (lastn == 0)
{
printf("Last digit of %d is %d and it is zero\n", n, lastn);
}
else
{
printf("Last digit of %d is %d and it is less than 6 and not 0\n", n, lastn);
}
return (0);
}
