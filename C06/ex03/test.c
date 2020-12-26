#include <stdio.h>

int		main()
{
	int it;
	int it2;
	int src;
	int array[2];
	int *out[2];

	it = 0;
	it2 = 0;
	src = 0;
	array[0] = 20;
	array[1] = 10;
	//out[0] = &array[0];
	/*printf("%d\n", array[0]);
	printf("%p\n", &array[0]);
	printf("%d\n", *out[0]);*/
	while (it < 3)
	{
		while (array[it] < array[src])
		{
			if (array[it] < array[src])
			{
				out[it2] = &array[it];
				it2++;
			}
			src++;
		}
		it++;
		src = 0;
	}
	printf("%d\n", *out[0]);
	printf("%d\n", *out[1]);//NOT WORKING, RANDOM NUMBER STORED!
}