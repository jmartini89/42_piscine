#include <stdio.h>

int	ft_strlen(char *str)
{
	int cntr;
	
	cntr = 0;
	while (*str != '\0')
	{
		str++;
		cntr++;
	}
	return (cntr);
}

int	main(void)
{
	int output;

	char str[4] = "test";
	output = ft_strlen(&str[0]);
	printf("%d\n", output);
}
