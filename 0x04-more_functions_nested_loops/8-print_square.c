#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int len, wid;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
