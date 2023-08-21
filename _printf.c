#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Custom implementation of printf function.
 * @format: The format string containing conversion specifiers.
 * @...: Arguments to be formatted and printed.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char c = (char)va_arg(args, int);
					_putchr(c);
					count++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char *);
					while (*s)
					{
						_putchr(*s);
						s++;
						count++;
					}
					break;
				}
				case '%':
				{
					_putchr('%');
					count++;
					break;
				}
				default:
				break;
			}
		}
		else
		{
			_putchr(*format);
			count++;
		}

		format++;
	}
	va_end(args);
	return (count);
}
int main(void)
{
	int num_chars = _printf("Hello, %s! You got %d%%.\n", "Jesse", 100);
	printf("Number of characters printed: %d\n", num_chars);

	return (0);
}
