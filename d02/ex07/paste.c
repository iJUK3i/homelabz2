#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	write (1, str, 1);
	str++;
}

int ft_successor(int *tab, int k)
{
	if (tab[k] < 10)
	{
		tab[k]++;
		return (1);
	}
	return (0);
}

int	ft_is_valid(int *tab, int k, int n)
{
	int i;

	if (tab[k] > 10 - n + k)
		return (0);
	i = 0;
	while (i < k)
	{
		if (tab[i] >= tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void ft_print_combn_backtrack(int *tab, int k, int n)
{
	int i;

	tab[k] = -1;
	while (ft_successor(tab, k) == 1)
	{
		if (ft_is_valid(tab, k, n) == 1)
		{
			if (ft_is_valid(tab, k, n) == 1 && k == n - 1)
			{
				i = 0;
				while (i < n)
					ft_putchar((char)tab[i++] + '0');
				if (tab[0] <= 9 - n)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			else
				ft_print_combn_backtrack(tab, k + 1, n);
		}
	}
}

void ft_print_combn(int n)
{
	int tab[10];

	ft_print_combn_backtrack(tab, 0, n);
}


int main()
{
	ft_print_combn(6);
	ft_putchar('\n');
	return 0;
}
