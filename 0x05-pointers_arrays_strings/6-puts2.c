#include "main.h"
/**
 * puts2 - prints every character of a string , starting
 * with the first character, followed by a new line
 * @str: pointer to the string to print
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
