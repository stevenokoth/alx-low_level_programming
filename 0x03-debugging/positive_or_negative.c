#include <stdlib.h>
#include <stdio.h>

/**
 * main -assigns a random number to int n every instance
 * it executes and prints it
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
        n = 0;
	
	if (n > 0)
        printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else if (n < 0)
                printf("%d is negative\n", n);
        return (0);
}
