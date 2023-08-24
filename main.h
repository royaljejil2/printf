#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchr(char c);
void _putint_tochr(int d);
int format_characters(const char *format, va_list args, int count);
int converttobinary(int dc);
int format_string(char *s, int count);
int _vsnputf(char *buffer, size_t size, const char *format, va_list args);
void _putbinary_tochr(int d);

#endif
