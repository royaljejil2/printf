#include "main.h"

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
