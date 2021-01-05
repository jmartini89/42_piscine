#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int it;
	int size;

	it = 0;
	size = max - min;
	if (size < 0)
		size = 0;
	str = malloc(sizeof(int) * size + 1);
	while (min < max)
	{
		str[it] = min;
		it++;
		min++;
	}
	str[it] = '\0';
	return str;
}

int		main(void)
{
	int min = 20;
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