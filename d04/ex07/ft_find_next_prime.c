#include <unistd.h>

int ft_is_prime(int nb);

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
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


int ft_find_next_prime(int nb)
{
	int i;
	int x;
	int flag;

	x = nb;
	flag = 0;
	i = 2;
	while (i <= x / 2)
	{
		i++;
		if (x % i == 0)
		{
			flag = 1;
			return (ft_find_next_prime(++x));
		}
	}
	if (flag == 0)
		return (x);
}

int main()
{
	int back;
	back = ft_find_next_prime(174);
	ft_putnbr(back);
	ft_putchar('\n');
	return (0);
}
