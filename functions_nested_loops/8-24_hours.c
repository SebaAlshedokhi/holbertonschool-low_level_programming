/**
* void jack_bauer -  function that prints every minute of the day.
* Description :  a function that prints every minute
* of the day of Jack Bauer, starting from 00:00 to 23:59.
*/

#include"main.h"
void jack_bauer(void)
{
	int H, h, M, m;
	for (H = 0; H <= 2; H++)
	{
		for (h = 0; h <= 3; h++)
		{
			if ( !(H > 2) && !(h > 3))
			{
				for (M = 0; M <= 5; M++)
				{
					for (m = 0; m <= 9; m++)
					{
						_putchar(H + '0');
						_putchar(h + '0');
						_putchar(':');
						_putchar(M + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
