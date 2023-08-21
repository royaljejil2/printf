#include "main.h"

/**
 * _putchr - To print a character
 * @c: A char input
 * Return: Always (0)
 */

int _putchr(char c)
{
	return (write(1, &c, 1));
}
