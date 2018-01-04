#include <unistd.h>

int ft_atoi(char *str);


int ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (neg)
		return (-nb);
	else
		return (nb);
}

int main()
{
	int a;
	int b;

	a = ft_atoi("h o p e");
	b = ft_atoi("      123");

	return (0);
}

