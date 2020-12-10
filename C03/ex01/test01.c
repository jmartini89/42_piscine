#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}

int	main(void)
{
	unsigned int n = 5;
	char a[] = "cana";
	char b[] = "";

	printf("originale %d\n", strncmp(a, b, n));
	printf("emulazione %d\n", ft_strncmp(a, b, n));
}
