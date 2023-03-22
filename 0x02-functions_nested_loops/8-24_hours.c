#include "main.h"

/**
 * jack_bauer - prints mins
 *
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
}
