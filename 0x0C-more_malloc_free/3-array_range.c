#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: pointer to the new array
 *         NULL if it fails
 */

int *array_range(int min, int max)
{
int i, *ptr;
if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
