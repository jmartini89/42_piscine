
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (size == 0)
		dest[i] = '\0';
	return (i);
}

int		main(void)
{
	char dest[] = "antani";
	char src[] = "XYZ";

	printf("%d", ft_strlcpy(dest, src, sizeof(dest)));
}
