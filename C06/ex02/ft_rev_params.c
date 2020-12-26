#include <unistd.h>

void	ft_putchar(char *str)
{
	int it;

	it = 0;
	while (str[it])
	{
		write(1, &str[it], 1);
		it++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int it;

	it = argc;
	while (--it >= 1)
		ft_putchar(argv[it]);
	return (0);
}