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
    int flag = 0;

    while (*ff)
	{
        if (*ff == '%') {
            ff++;
            switch(*ff) {
                case 'b':
                    dc = va_arg(args, int);
                    flag = 1;
                    _putbinary_tochr(converttobinary(dc));
                    _putchr('\n');
                    break;
            }
        }
        ff++;
    }
    if (flag == 1) {
        return 0;
    } 

	return vsnprintf(buffer, size, format, args);
}
