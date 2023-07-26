#include "function_pointers.h"
/**
 * int_index - return index placee if comparison == true, else return -1
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to one of the functions in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
