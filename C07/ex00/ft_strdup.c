#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int it;

	it = 0;
	while (str[it])
		it++;
	return it;
}

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

	newstr = malloc(sizeof(*newstr) * ft_strlen(src) + 1);
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
	return (0);
}