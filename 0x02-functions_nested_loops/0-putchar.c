f02ca4ae0d86:~/alx-low_level_programming/0x02-functions_nested_loops# vi 0-putchar.c
#include "main.h"

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
