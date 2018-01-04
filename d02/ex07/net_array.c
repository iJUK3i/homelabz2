#include <unistd.h>
void ft_putchar(char c);
void ft_putnbr(int nb);

void ft_putnbr(int nb)
{
	ft_putchar(nb + '0');
}

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

void nbr_arr(int n)
{
	int x;
	int y;
	int z;
	int a;
	int b;
	int c;
	int tmp;
	int arr[n];
	z = 10 - n;
	x = 0;
	y = 0;
	arr[x][y] = 0;
/*	if (n == 1)
	{
		a = 0;
		while (a < 10)
		{
			ft_putnbr(a);
			a++;
		}
	}
*/	if (n > 1)
	{
		y = 0;
		while (y < n)
		{
			ft_putnbr(arr[x][y]);
			tmp = arr[x][y];
			b = tmp + 1;
			y++;
			arr[x][y] = b;
		}
		ft_putstr(", ");
	}
}

void ft_check(int **arr, int b, int x, int y)
	{
		ft_putstr("test area");
		ft_putchar('\n');
		ft_putnbr(arr[n][x]);
		ft_putchar('\n');
		ft_putnbr(b);
		ft_putchar('\n');
		ft_putnbr(x);
		ft_putchar('\n');
		ft_putnbr(arr[x][y]);
		ft_putstr("test result");
	}
}

int main()
{
	nbr_arr(4);
	ft_putchar('\n');
	return 0;
}


