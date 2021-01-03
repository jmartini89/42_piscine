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
	char *ptr;

	str = "RINA";
	ptr = ft_strdup(str);
	printf("emulated %s\n", ptr);
	free(ptr);
	printf("emulated %s\n", ptr);
	return (0);
}