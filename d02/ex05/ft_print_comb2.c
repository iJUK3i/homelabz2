#include <unistd.h>

void ft_print_comb2(void);

int ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_comb2(void)
{
	char nbr[4] = {0, 0, 0, 1};

	while (!((nbr[0] == 9) && (nbr[1] == 9)))
	{
		ft_putchar(nbr[0] + 48);
		ft_putchar(nbr[1] + 48);
		ft_putchar(' ');
		ft_putchar(nbr[2] + 48);
		ft_putchar(nbr[3] + 48);
		if (!((nbr[0] == 9) && (nbr[1] == 8)))
			ft_putchar(',');
		if (((nbr[0] == 9) && (nbr[1] == 8)))
			ft_putchar(' ');
		nbr[3]++;
		
		if (nbr[3] = 10)
		{
			nbr[2] = (nbr[2] + 1);
			nbr[3] = 1;
		}

		if (nbr[2] == 10)
		{
			nbr[2] = nbr[0];
			nbr[1]++;
			if (nbr[1] = 10)
			{
				nbr[0]++;
				nbr[1] = 1;
			}
			nbr[3] = nbr[1] + 1;
		}
	}
}

int main()
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
