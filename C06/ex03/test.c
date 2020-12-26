#include <stdio.h>

int		main()
{
	int it;
	char *array[2];
	char **out[2];

	it = 0;
	array[0] = "cane";
	array[1] = "gatto";
	out[0] = &array[0];
	printf("%s\n", array[0]);
	printf("%p\n", array[0]);
	printf("%p\n", *out[0]);
}