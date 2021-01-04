#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int it;

	it = 0;
	printf("%ld\n", sizeof(str));
	str = malloc(sizeof(100));
	printf("%ld\n", sizeof(str));
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
	int it;

	min = 10;
	max = 30;
	it = 0;
	ft_range(min, max);
	return (0);
}