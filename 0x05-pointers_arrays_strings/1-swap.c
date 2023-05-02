#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first inerger to be swapped.
 * @b: The second inerger ro be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the functiom that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
