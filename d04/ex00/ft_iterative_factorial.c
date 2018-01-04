#include <unistd.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int ans;
	int i;

	i = 1;
	ans = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
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


	back = ft_iterative_factorial(10);
	ft_putnbr(back);
	ft_putchar('\n');
	return (0);
}

