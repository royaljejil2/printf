#include "main.h"
/**
 * converttobinary - function that converts integer to binary
 * @dc: decimal numner passed to function
 * Return: binary number
*/
int converttobinary(int dc)
{
	int bn = 0, i = 1, r;

	while (dc != 0)
	{
		r = dc % 2;
		dc /= 2;
		bn += r * i;
		i *= 10;
	}

	return (bn);
}
