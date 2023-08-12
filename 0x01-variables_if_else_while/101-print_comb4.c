#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, s, t;
	
	for (f = '0'; f < '9'; f++)
	{
		for (s = f + 1; f <= '9'; s++)
		{
			for (t = s + 1; s <= '9'; s++)
			{
				if ((f != s) != t)
				{
					putchar(f);
					putchar(s);
					putchar(t);

					if (f == '7' && s == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');

	return (0);
}
