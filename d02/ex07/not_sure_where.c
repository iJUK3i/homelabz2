#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
void nbr_check(int n);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	ft_putchar(nb + '0');
}

void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int show_arr(int *arr, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
		ft_putnbr(arr[i]);
		i++;
		if (i == n && arr[0] != 10 - n)
			ft_putstr(", ");
	}
	return (i);
}

int make_arr(int *arr, int i, int n)
{
	arr[i] = 0;
	i++;
	arr[i] = arr[i] + 1;
	i++;
	if (n > 2)
	{
		while (i < n)
		{
			arr[i] = arr[i - 1] + 1;
			i++;
		}
	}
	return (*arr);
}


int inc_arr(int *arr, int y, int z, int n)
{
	int j;

	j = n - 1;
	while (arr[0] <= 10 - n)
	{
		if (arr[j] <= 9)
		{
			arr[j] = arr[j] + 1;
			if (arr[j] == 10)
				arr[j] = arr[j] - 1;
			show_arr(arr, n);
			if(y == 9)
				return (0);
			if (n >= 2 && arr[j] == 9)
			{
				y++;
				arr[n - y] = arr[n - y] + 1;
				arr[n - z] = arr[n - y] + 1;
				z++;
			}
		}
	}
}

void nbr_check(int n)
{
	int arr[n];
	int temp;
	int i;
	int y;
	int z;
	
	y = 1;
	z = 1;
	i = 0;
	*arr = make_arr(arr, i, n);
	i = show_arr(arr, n);
	if (n > 1)
		inc_arr(arr, y, z, n);
}

int main()
{
	nbr_check(2);
	ft_putchar('\n');
	return 0;
}











