#include <stdio.h>

int		ft_is_prime(int nb)
{
	int it;

	it = 2;
	if (nb < 2)
		return (0);
	while (it < nb)
	{
		if ((nb % it) == 0)
			return (0);
		it++;
	}
	return (1);
}

int		main()
{
	int nb = 7921;
	printf("%d\n", ft_is_prime(nb));
}