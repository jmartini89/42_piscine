/*

THIS IS TOO HARD, ABANDONED (for now)

*/

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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

void	ft_print_str(int *str, int size)
{
	int it;

	it = 0;
	while (it < size)
	{
		printf("%d\n", str[it]);
		it++;
	}
}

/*void	ft_swap(char *a, char *b)
{
	char tmp[ft_strlen(a)];
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}*/

void	ft_sort_params(int n, char **str)
{
	int it;
	int it2;
	char *candidate;

	it = 1;
	while (it < (n - 1))
	{
		candidate = str[1];
		it2 = it + 1;
		while (it2 < n)
		{
			if (str[it2] < str[candidate])
				candidate = str[it2];
			it2++;
		}
		//ft_swap(&str[candidate], &str[it]);
		it++;
	}
	//ft_print_str(str, n);
}

int		main(int argc, char **argv)
{
	int arguments;

	arguments = argc - 1;
	if (argc < 2)
	{
		printf("not enough arguments\n");
		printf("%s\n", argv[0]);
		return (0);
	}
	ft_sort_params(arguments, **argv);
	//printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}

/*

THIS IS TOO HARD, ABANDONED (for now)

*/