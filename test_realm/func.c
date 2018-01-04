#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
int ft_atoi(char *str);






void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
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
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (neg)
		return (-nb);
	else
		return (nb);
}













int main()
{
	int a;

	ft_putstr("this is a string \n");
	ft_putnbr(42424242);
	ft_putchar('\n');
	a = ft_atoi("4gw2a0sh"); // start atoi
	ft_putnbr(a);
	ft_putchar('\n'); //end of atoi
	return 0;
}
