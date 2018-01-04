#include <unistd.h>

void ft_alpha_rev(void);

int ft_putchar(char x)
{
	write (1, &x, 1);
	return (0);
}

void ft_alpha_rev()
{
	char x;
	x = 'z';

	while ('a' <= x)
	{
		ft_putchar(x);
		x--;
	}
}

int main()
{
	ft_putchar('\n');
	ft_alpha_rev();
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
