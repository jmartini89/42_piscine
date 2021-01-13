#include "ft.h"
//#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int it;

	it = 0;
	while (str[it])
		it++;
	return it;
}