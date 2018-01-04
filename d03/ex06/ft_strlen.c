#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
		
int ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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



int main()
{
	int a;
	int b;
	char str[] = "this should have 25 chars";


	ft_putstr(str);
	ft_putchar('\n');
	a = ft_strlen(str);
	b = ft_strlen2(str);

	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
