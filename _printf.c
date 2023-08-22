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
				case 'd':
				case 'i':
				{
					int d = va_arg(args, int);
					_putint_tochr(d);
					break;
				}
				case 'b':
				{
					int dc = va_arg(args, int);
					int bn = 0, i = 1, r;
					while (dc != 0) {
						r = dc % 2;
						dc /= 2;
						bn += r * i;
						i *= 10;
					}
					_putint_tochr(bn);
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
