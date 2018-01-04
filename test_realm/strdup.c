#include <unistd.h>
#include <string.h>
#include <stdlib.h>




void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

char *ft_strdup (const char *s)
{
	char *d = malloc (strlen (s) + 1);
	if (d == NULL)
		return NULL;
	strcpy (d, s);
	return d;
}

int main()
{
	char *a;
	char *b = "whats up duderino?";
	a =	ft_strdup(b);
    ft_putstr(a);
	ft_putstr("\n");
	return 0;
}
