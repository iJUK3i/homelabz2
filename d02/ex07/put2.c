#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_put_two(int n)
{
	char a1;
	char a2;

	a1 = (char)(n / 10) + '0';
	a2 = (char)(n % 10) + '0';
	ft_putchar(a1);
	ft_putchar(a2);
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_put_two(i);
			ft_putchar(' ');
			ft_put_two(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

int main()
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
