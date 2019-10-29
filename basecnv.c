#include "holberton.h"
/**
 * basecnv - prints function
 * @value: The number
 * @b: int
 * @length: int
 * Return: On success length.
 */
int basecnv(unsigned int value, int b, int length)
{
if (!value)
return (length);
else if (b == 16)
{
if (value % b >= 10)
{
length = basecnv(value / b, b, length + 1);
_putchar(value % b + 'A' - 10);
return (length);
}
else
{
length = basecnv(value / b, b, length + 1);
_putchar(value % b + '0');
return (length);
}
}
else
{
length = basecnv(value / b, b, length + 1);
_putchar(value % b + '0');
return (length);
}
}
