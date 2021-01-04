#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int it;
	int alloc;

	it = 0;
	alloc = max - min;
	if (alloc < 0)
		alloc = 0;
	str = malloc(sizeof(int) * alloc + 1);
	while (min < max)
	{
		str[it] = min;
		it++;
		min++;
	}
	return str;
}

int		main(void)
{
	int min = 29;
	int max = 30;
	int it = 0;
	int *out;

	it = 0;
	out = ft_range(min, max);
	while (out[it])
	{
		printf("%d\n", out[it]);
		it++;
	}
	return (0);
}