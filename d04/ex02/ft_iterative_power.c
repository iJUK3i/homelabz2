#include <unistd.h>

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
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
	return (result);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0 )
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
	back = ft_iterative_power(10, 3);
	ft_putnbr(back);
	return (0);
}
