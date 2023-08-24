#include "main.h"
#include <string.h>

/**
 * _putchr - To print a character
 * @c: A char input
 * Return: Always (0)
 */

int _vsnputf(char *buffer, size_t size, const char *format, va_list args)
{
    int dc;
    const char *ff = format;

    while (*ff)
	{
        if (*ff == '%') {
            ff++;
            switch(*ff) {
                case 'b':
                    dc = va_arg(args, int);
                    _putbinary_tochr(converttobinary(dc));
                    _putchr('\n');
                    break;
            }
        }
        ff++;
    }

	return vsnprintf(buffer, size, format, args);
}
