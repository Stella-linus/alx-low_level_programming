#include "main.h"

/**
 * print_square - Prints n squares according n number of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{
	int x, y;

	for (size <= 0)
	{
	_putchsr('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchsr(35);
	}
	_putchsr('\n');
	}
	}
}
