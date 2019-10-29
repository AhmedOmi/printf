#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>


/**
 * p_char - print char
 * @args: argument of type va_list
 * Return: integer 1
 */

int p_char(va_list *args)
{
char c = va_arg(*args, int);

_putchar(c);
return (1);
}
