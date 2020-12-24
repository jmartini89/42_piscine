#include <stdio.h>

int		ft_sqrt(int nb)
{
	int it;
	int check;

	it = 0;
	while (check != nb)
	{
		it++;
		check = it * it;
		if (check > nb)
			return (0);
	}
	return it;
}

void	main()
{
	int nb = 16;
	printf("%d\n", ft_sqrt(nb));
}