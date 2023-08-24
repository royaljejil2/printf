#include "main.h"
#include <string.h>

/**
 * _vsnputf - prints a formatted string
 * @buffer: memory allocation
 * @size: size of buffer
 * @format: formatted char string
 * @args: va_list name 
 * Return: int
 */
int _vsnputf(char *buffer, size_t size, const char *format, va_list args)
{
    int dc;
    const char *ff = format;
    int flag = 0;

    while (*ff)
	{
        if (*ff == '%')
        {
            ff++;
            switch(*ff)
            {
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
    if (flag == 1)
    {
        return 0;
    } 
	return vsnprintf(buffer, size, format, args);
}
