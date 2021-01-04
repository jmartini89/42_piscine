#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int it;
	int alloc;

	it = 0;
	alloc = max - min;
	str = malloc(sizeof(int) * alloc);
	while (min < max)
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
	int *out;
	int it;
	int a[1];
	int it;

	a[0] = '\0';
	min = 31;
	max = 30;
	it = 0;
	out = ft_range(min, max);
	printf("%d\n", a[0]);
	/*while (out[it])
	{
		printf("%d\n", out[it]);
		it++;
	}*/
	ft_range(min, max);
	return (0);
}