#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * printAddress - Prints the memory address.
 * @ptr: Pointer to a memory location.
 */

void printAddress(const void *ptr);
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void);

/**
 * printAddress - Prints the memory address.
 * @ptr: Pointer to a memory location.
 */

void printAddress(const void *ptr)
{
	printf("The address of 'num' is: %p\n", ptr);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num = 42;
	int *ptr = &num;

	printAddress((const void *)ptr);

	return (0);
}
