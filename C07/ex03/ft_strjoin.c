#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int it;

	it = 0;
	while (str[it])
		it++;
	return it;
}

char	*ft_strcpy(char *dest, char *src, int nbr)
{
	printf("ENTRY\t%d\n", nbr);
	printf("ENTRY\t%s\n", dest);
	printf("ENTRY\t%s\n", src);
	int i;

	i = 0;
	while (src[i])
	{
		dest[nbr] = src[i];
		printf("%c\n", dest[nbr]);
		i++;
		nbr++;
	}
	dest[nbr] = '\0';
	printf("EXIT\t%d\n", nbr);
	printf("EXIT\t%s\n", dest);
	printf("\n");
	return (dest);
}

char	*ft_concatenate(int size, char **strs, char *sep, char *output)
{
	int it;
	int it2;

	it = 0;
	it2 = 0;
	while (strs[it])
	{
		output = ft_strcpy(output, strs[it], it2);
		it2 += ft_strlen(strs[it]);
		if (it + 1 != size)
		{
			output = ft_strcpy(output, sep, it2);
			it2 += ft_strlen(sep);
		}
		it++;
	}
	return output;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *output;
	int it;

	it = 0;
	if (size <= 0)
	{
		output = malloc(sizeof(NULL));
		return output;
	}
	while (strs[it])
	{
		output = malloc(sizeof(output) * ft_strlen(strs[it]));
		if (it + 1 != size)
			output = malloc(sizeof(output) * ft_strlen(sep));
		it++;
	}
	return ft_concatenate(size, strs, sep, output);
}

int		main(void)
{
	int size;
	char *strs[4];
	char *sep;
	char *a;
	char *b;
	char *c;

	size = 3;
	a = "hello";
	b = "magic";
	c = "dog";
	strs[0] = a;
	strs[1] = b;
	strs[2] = c;
	strs[3] = NULL;
	sep = "-";
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}