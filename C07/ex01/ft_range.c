#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int it;

	it = 0;
	str = malloc(sizeof(max - min));
	while (str[it])
	{
		str[it] = min;
		it++;
		min++;
	}
	return str;
}

int		main(void)
{
	int min;
	int max;

	min = 10;
	max = 30;
	printf("%s\n", ft_range(min, max));
	return (0);
}