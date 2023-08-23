#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - Custom implementation of printf function.
 * @format: The format string with conversion specifiers.
 * @...: Arguments passed to the function.
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
			count = format_characters(format, args, count);
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
