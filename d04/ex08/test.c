#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

char idk()
{
	int i;

	i = '0';
	if (i == '0' || ('2' + '4') == ('4' + '1'))  
	{
		ft_putchar('d');
		ft_putchar('d');
		return i;
	}
}

int main()
{
	idk();
	return 0;
}
