#include "main.h"
/**
 * format_characters - format specifiers
 * @format: first argument passed
 * @args: list of arguments passed
 * @count: iterator
 * Return: count
*/
int format_characters(const char *format, va_list args, int count)
{
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
			count = format_string(va_arg(args, char *), count);
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

			_putint_tochr(converttobinary(dc));
			break;
		}
		case '%':
		{
			_putchr('%');
			count++;
			break;
		}
	}
	return (count);
}

/**
* format_string - format specifiers
* @s: string passed to function
* @count: iterator
* Return: count
*/
int format_string(char *s, int count)
{
	while (*s)
	{
		_putchr(*s);
		s++;
		count++;
	}

	return (count);
}
