#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

unsigned int	ft_strlen(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return (i + j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (i + j < ft_strlen(dest, src))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest, src));//BUG: 2 times SRC value!
}

int		main(void)
{
	char dest[20] = "";
	char src[] = "magico";
	unsigned int size = 4;

	//printf("ORIGINALE: %d\n", strlcat(dest, src, size));//BROKEN LINUX
	printf("RETURN: %d\n", ft_strlcat(dest, src, size));
	printf("STRINGA: %s\n", dest);
}
