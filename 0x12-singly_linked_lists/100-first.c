#include <stdio.h>


/**
 * bmain - prints a string before the
 * main function is executed
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\n I bore my house upon my back!\n");
}
