#include <unistd.h>
void ft_putchar(char c);
void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int ft_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	ft_putstr("check happened \n");
	return (result);
}

int ft_sqrt(int nb)
{
	double check;
	double n = nb / 2.0;
	double x = 0.0;
	while (n != x)
	{
		x = n;
		n = (n + nb / n) / 2.0;
	}
	check = ft_power(n, 2);
	if (nb == check)
		return n;
	else
		return (0);
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

