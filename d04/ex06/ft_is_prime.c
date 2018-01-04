#include <unistd.h>

int ft_is_prime(int nb);

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


int ft_is_prime(int nb)
{
	int i;
	int flag;

	flag = 0;
	i = 2;
	while (i <= nb / 2)
	{
		i++;
		if (nb % i == 0)
		{
			flag = 1;
			return (0);
		}
	}
	if (flag == 0)
		return (1);
}

int main()
{
	int back;
	back = ft_is_prime(13);
	ft_putnbr(back);
	ft_putchar('\n');
	return (0);
}
