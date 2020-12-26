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
	int it2;
	int src;
	char *out[argc];//mmh...

	it = 0;
	it2 = 0;
	src = 0;
	while (argc > 1)//++it)
	{
		while (argv[it])
		{
			while (argv[src])
			{
				if (argv[it] < argv[src + 1])
					*out[it2] = *argv[it];
				src++;
			}
			it++;
			it2++;
			src = 0;
		}
	}
	it2 = 0;
	while (out[it2])
	{
		ft_putchar(out[it2]);
		it2++;
	}
	return (0);
}

/*
check if argv[n] is lower than others
if so, save iterator position in array as pointer
else check next position & reset search iterator

TAKE A LOOK AT:
STRNCMP & STRSTR (C03)

copy memory address from one string position to another
build an array which stores memory addresses of 1st string
ohboi...
*/