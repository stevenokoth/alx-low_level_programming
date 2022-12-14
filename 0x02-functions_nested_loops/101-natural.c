#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 *  of 3 or 5 below 1024
 *  followed by a new line
 *  Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int a;

	sum3 = 0;
	sum5 = 0;
	sum = 0;
	for (a = 0; a < 1024; ++a)
	{
		if ((a % 3) == 0)
		{
			sum3 = sum3 + a;
		} else if ((a % 5) == 0)
		{
			sum5 = sum5 + a;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
