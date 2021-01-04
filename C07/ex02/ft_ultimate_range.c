#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int it;
	int size;

	it = 0;
	size = max - min;
	*range = malloc(sizeof(int) * size + 1);
	while (min < max)
	{
		*range[it] = min;
		it++;
		min++;
	}
	return size;
}

int		main(void)
{
	int **range;
	int size;
	int min = 10;
	int max = 30;
	int it = 0;

	size = ft_ultimate_range(range, min, max);
	printf("%d\n", size);
	/*
	while (*range[it])
	{
		printf("%d\n", *range[it]);
		it++;
	}
	*/
	return (0);
}