#include <unistd.h>

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

int main(int nb_arg, char *str[])
{
	if (nb_arg > 1)
	{
		int i;
		int j;
		i = 0;
//		while (str[i])
//			i++;
//		i--;
		j = 0;
		str[j] = '\0';
		while (str[i])
		{
			ft_putstr(str[i]);
			ft_putchar(' ');
			i++;
		}
	}
	ft_putchar('\n');
	ft_putchar(nb_arg + 48 - 1);
	ft_putchar('\n');
	return 0;
}
	
