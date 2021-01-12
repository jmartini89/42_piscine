#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int it;
	int size;

	it = 0;
	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	if (size)
	{
		*range = malloc(sizeof(**range) * size + 4);
		while (min < max)
		{
			range[0][it] = min;
			min++;
			it++;
		}
		range[0][it] = '\0';
		return size;
	}
}

int		main(void)
{
	int *range;
	int size;
	int min;
	int max;
	int it;

	range = NULL;

	/* ADDRESS BEFORE MEMALLOC */
	printf("BEFORE\t&range\t\t%p\n", &range);
	printf("BEFORE\trange\t\t%p\n", range);
	printf("BEFORE\t&range[0]\t%p\n", &range[0]);
	printf("\n");

	min = 10;
	max = 20;
	it = 0;
	size = ft_ultimate_range(&range, min, max);
	
	/* ADDRESS AFTER MEMALLOC */
	printf("AFTER\t&range\t\t%p\n", &range);
	printf("AFTER\trange\t\t%p\n", range);
	printf("AFTER\t&range[0]\t%p\n", &range[0]);
	printf("\n");

	printf("return size \t%d\n", size);

	if (range)
	{
		while (range[it])
		{
			printf("%d ", range[it]);
			it++;
		}
		printf("\n");
	}
	return (0);
}