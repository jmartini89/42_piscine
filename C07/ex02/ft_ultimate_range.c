#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int it;
	int size;

	it = 0;
	size = max - min;

	printf("pre malloc \t%p\n", range);
	
	range = malloc(sizeof(range) * 10);
	
	printf("malloc \t\t%p\n", range);
	//printf("&range \t\t%p\n", &range);
	//printf("&range[0] \t%p\n", &range[0]);
	//printf("&range[1] \t%p\n", &range[1]);
	//printf("&range[2] \t%p\n", &range[2]);
	/*
	while (min < max)
	{
		*range[it] = min;
		it++;
		min++;
	}
	*range[it] = '\0';
	*/

	return size;
}

int		main(void)
{
	int **range;
	int size;
	int min = 10;
	int max = 30;
	int it = 0;

	printf("main \t\t%p\n", range);
	
	/*
	printf("&main \t\t%p\n", &range);
	printf("&main[0] \t%p\n", &range[0]);
	*/

	size = ft_ultimate_range(range, min, max);
	printf("return size \t%d\n", size);

	printf("OUT MAIN \t%p\n", range);

	/*
	while (range[it])
	{
		printf("%d\n", range[it]);
		it++;
	}
	*/
	return (0);
}
