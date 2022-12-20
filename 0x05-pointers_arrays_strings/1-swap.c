#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: this is the first entry
 * @b: this is the second entry
 * int c: addressed the swapped value will be sent to
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
