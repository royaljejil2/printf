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
    va_list args;
	int len;
	int i;
	char *errorFormatMsg = "Error formatting output\n";
	char *errorPrintMsg = "Printing error\n";
	
    char buffer[1024]; // Buffer to hold formatted output

    va_start(args, format);
    len = _vsnputf(buffer, sizeof(buffer), format, args);

    va_end(args);

    if (len < 0)
    {
		_putchr(*errorFormatMsg);
        return -1;
    }

	for (i = 0; i < len; i++)
    {
        if (_putchr(buffer[i]) == EOF)
        {
            _putchr(*errorPrintMsg);
            return -1;
        }
    }

    return len;
}

