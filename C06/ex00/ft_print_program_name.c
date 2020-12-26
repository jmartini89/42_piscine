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
	(void) argc;
	ft_putchar(argv[0]);
	return (0);
}