#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from input to 98, in order separated by a comma followed by a space.
 * @n:int 1
 * Return: int
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	} else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d" , n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
