#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char a[] = "a";
	char b[] = "asa";

	printf("emulazione %d\n", ft_strcmp(a, b));
	printf("originale %d\n", strcmp(a, b));
}
