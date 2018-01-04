#include <unistd.h>

double ft_sqrt(double nb)
{
	double n = nb / 2.0;
	double x = 0.0;
	while (n != x)
	{
		x = n;
		n = (n + nb / n) / 2.0;
	}
	return n;
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = - nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int main()
{
	int back;
	back = ft_sqrt(16);
	ft_putnbr(back);
	ft_putchar('\n');
	return (0);
}

