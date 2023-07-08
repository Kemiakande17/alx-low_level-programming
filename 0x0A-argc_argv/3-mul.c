#include <stdio.h>
#include "main.h"

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
* @atoi: converts argv to int
*
* Return: 0 (Success) 1 (Error)
*/

int main(int argc, char *argv[])
int _atoi(char *s)
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
