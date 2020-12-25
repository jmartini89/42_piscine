#include <stdio.h>

int		ft_fibonacci(int index)
{
	int Fn;

	Fn = index;
	if (Fn < 0)
		return (-1);
	if (Fn <= 1)
		return (Fn);
	if (Fn > 1)
		Fn = ft_fibonacci(Fn - 1) + ft_fibonacci(Fn - 2);
}

void	main()
{
	printf("%d\n", ft_fibonacci(7));
}