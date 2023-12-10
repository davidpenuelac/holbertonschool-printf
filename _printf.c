#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

int _putchar(char c);

/**
 * _putint - prints an integer
 * @l: integer
 *
 * Return: Always 0.
 */

void _putint(int l)
{
char *ch = "0123456789";

if (l >= 10)
{
int n = (l / 10);
_putint(n);
_putchar(ch[l - n * 10]);
}
else
{
_putchar(ch[l]);
}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _printf - prints something
 * @format: format
 *
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
va_list arg;
int i = 0;

va_start(arg, format);
if (format == NULL)
return (0);
while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
i++;
continue;
}
else
{
if (format[i + 1] == '%')
_putchar('%');
else if (format[i + 1] == 'c')
{
int c = va_arg(arg, int);
_putchar(c);
}
else if (format[i + 1] == 's')
{
char *str = va_arg(arg, char *);
int j = 0;
while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
}
else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
{
int r = va_arg(arg, int);
_putint(r);
}
else
continue;
i++;
}
i++;
}
va_end(arg);
return (i);
}
