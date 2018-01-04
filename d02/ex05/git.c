#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '/';
	while (a++ <= '9')
	{
		b = '/';
		while (b++ < '9')
		{
			c = a - 1;
			while (c++ < '9')
			{
				d = b;
				while (d++ < '9')
				{
					if (b != d || a !=c )
					{
						if (!(c == '0' && d == '1'))
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
					}
				}
			}
		}
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_comb2();
	return (0);
}
