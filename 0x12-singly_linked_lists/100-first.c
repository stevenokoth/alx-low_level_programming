#include <stdio.h>

void print_something(void) __attribute__ ((constructor));

/**
 *print_something -it's work is to print before main fucntion
 */

void print_something(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
