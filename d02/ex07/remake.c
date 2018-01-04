#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);
int nbr_check(int n);

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


int inc_arr(int *arr, int n)
{
	int j;
	int y;
	int z;
	int max;
	y = 2;
	z = 1;

	max = 10 - n;
	j = n - 1;
	while (arr[0] <= max)
	{

		while (arr[n - y] <= max)
		{
			arr[j] = arr[n - 2] + 1;
			while (arr[j] <= 9)
			{
				show_arr(arr, n);
				arr[j] = arr[j] + 1;
				if (arr[j] == 10)
				{
//					arr[j] = arr[j] - 1;
					arr[n - y] = arr[n - y] + 1;
					if (arr[n - y] == arr[n - y - 1])
					{
						y++;
					}
				}
			}
		}
	}
}

int nbr_check(int n)
{
	int arr[n];
	int temp;
	int i;
	
	i = 0;
	*arr = make_arr(arr, i, n);
//	i = show_arr(arr, n);
	if (n > 1)
		inc_arr(arr, n);
	if (n == 1)
	{
		ft_putstr("cool beans bro");
		return 0;
	}
}

int main()
{
	nbr_check(1);
	ft_putchar('\n');
	return 0;
}











