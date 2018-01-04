#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int previous(int *arr, int k)
{
	if (arr[k] < 10)
	{
		arr[k]++;
		return (1);
	}
	return (0);
}

int ft_valid(int *arr, int k, int n)
{
	int i;

	if (arr[k] > 10 - n + k)
		return (0);
	i = 0;
	while (i < k)
	{
		if (arr[i] >= arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void ft_backtrack(int *arr, int k, int n)
{
	int i;

	arr[k] = -1;
	while (previous(arr, k) == 1)
	{
		if (ft_valid(arr, k, n) == 1)
		{
			if (ft_valid(arr, k, n) == 1 && k == n - 1)
			{
				i = 0;
				while (i < n)
					ft_putchar((char)arr[i++] + '0');
				if (arr[0] <= 9 - n)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			else
				ft_backtrack(arr, k + 1, n);
		}
	}
}

void ft_print_combn(int n)
{
	int arr[10];

	ft_backtrack(arr, 0, n);
}

int main()
{
	ft_print_combn(9);
	ft_putchar('\n');
	return (0);
}
