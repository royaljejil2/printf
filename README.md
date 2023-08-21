_Printf Project

The _printf function is a custom implementation of the printf function in C.
The function supports various formate specifiers that prints different data types.

Table of Contents
   1. Usage
   2. Supported Format Specifiers

Usage
To use the _printf function, include its header file and call the function as shown below:
#include "my_printf.h"

Supported Format Specifiers

The _printf function supports the following format specifiers:

    %c: Prints a single character.
    %s: Prints a null-terminated string.
    %%: Prints a literal percent sign.
    %d or %i: Prints signed integers.

Example usage of each format specifier:
_printf("Character: %c\n", 'A');
_printf("String: %s\n", "Hello");
_printf("A percentage sign: %%\n");
_printf("Integer: %d\n", 42);
_printf("Integer: %i\n", 2);

Limitations
The _printf function is a simplified implementation for educational purposes and may not handle all edge cases or advanced features found in the standard printf function.
The function does not support field width, precision,buffr handling, flag characters and length modifiers.

