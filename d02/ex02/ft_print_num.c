#include <unistd.h>

void ft_print_num(void);

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (0);
}

void ft_print_num()
{
	int x;
	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}

int main()
{
	ft_putchar('\n');
	ft_print_num();
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
