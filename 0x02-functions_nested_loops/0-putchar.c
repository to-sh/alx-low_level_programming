#include "_putchar.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char _putchar[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(_putchar); c++)
	{
		_putchar(_putchar[c]);
	}
_putchar('\n');
return (0);
