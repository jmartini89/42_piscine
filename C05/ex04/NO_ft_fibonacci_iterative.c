#include <stdio.h>

int		ft_fibonacci(int index)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (index > 1)
	{	
		c = b + a;
		a = b;
		b = c;
		index--;
	}
	return c;
}

void	main()
{
	printf("%d\n", ft_fibonacci(7));
}