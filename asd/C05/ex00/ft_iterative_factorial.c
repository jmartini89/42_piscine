#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int it;
	int ret;

	it = nb;
	ret = 1;
	if (nb > 0)
	{
		while (it)
		{
			ret *= nb;
			nb--;
			it--;
		}
		return (ret);
	}
	return (0);
}

int		main()
{
	int nb = 13;
	printf("%d\n", ft_iterative_factorial(nb));
}