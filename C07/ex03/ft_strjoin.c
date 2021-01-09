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
	int i;

	i = 0;
	while (src[i])
	{
		dest[nbr] = src[i];
		i++;
		nbr++;
	}
	dest[nbr] = '\0';
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
	int a;
	int b;
	int it;

	it = 0;
	a = 0;
	b = 0;
	if (size <= 0)
	{
		output = malloc(sizeof(NULL));
		return output;
	}
	while (strs[it])
	{
		a += ft_strlen(strs[it]);
		if (it + 1 < size)
			b += ft_strlen(sep);
		it++;
	}
	output = malloc(sizeof(*output) * (a + b) + 1);
	output = ft_concatenate(size, strs, sep, output);
	return output;
}

int		main(void)
{
	int size;
	char *strs[4];
	char *join;
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
	join = ft_strjoin(size, strs, sep);
	printf("%s\n", join);
	free(join);
	return (0);
}