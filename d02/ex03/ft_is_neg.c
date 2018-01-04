#include <unistd.h>

void ft_is_neg(int n);

int ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void ft_is_neg(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	if (n >= 0)
	{
		write (1, "P", 1);
	}
}

int main()
{
	ft_putchar('\n');
	ft_is_neg(-51);
	ft_putchar('\n');
	ft_is_neg(5);
	ft_putchar('\n');
	ft_is_neg(-1);
	ft_putchar('\n');
	ft_is_neg(0);
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
