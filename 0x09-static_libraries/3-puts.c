#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: my input string
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
