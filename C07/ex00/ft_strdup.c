#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *newstr;

	newstr = malloc(sizeof(src));
	ft_strcpy(newstr, src);
	return newstr;
}

int		main(void)
{
	char *str;

	str = "test";
	printf("original %s\n", strdup(str));
	printf("%ld\n", sizeof(strdup(str)));
	printf("%ld\n", sizeof(str));
	printf("emulated %s\n", ft_strdup(str));
	printf("%ld\n", sizeof(ft_strdup(str)));

	return (0);
}