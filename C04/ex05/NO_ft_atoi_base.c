//PORCODIO!
//STR IS ALREADY IN DECLARED BASE!
//CONVERT TO INT FFS
//PORCODIO!

#include <unistd.h>
#include <stdio.h>

int	ft_check_base(char *str)
{
	int it;
	int src;

	it = 0;
	src = 0;
	if (str[it] == '\0' || str[it + 1] == '\0')
		return (0);
	while (str[it])
	{
		if (str[it] < 32 || str[it] > 126)
			return (0);
		if (str[it] == '+' || str[it] == '-')
			return (0);
		while (str[src])
		{
			if (str[it] == str[src + 1])
				return (0);
			src++;
		}
		it++;
		src = it;
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 0;
	number = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)//isspace
		i++;
	while (str[i] == '-' || str[i] == '+')//checksign
	{
		if (str[i] == '-')
			sign--;
		if (str[i] == '+')
			sign++;
		i++;
	}
	if (sign >= 0)
		sign = 1;
	else if (sign < 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= 'F')
	{
		number = (number * 10) + ((str[i] - '0'));
		i++;
	}
	return (number * sign);
}

int		ft_atoi_base(char *str, char *base)
{
	if (ft_check_base(base))
	{
		int nbr;
		int sign;
		int size;
		int it;
		int it2;
		char output[100];
		char result[100];

		nbr = ft_atoi(str);
		sign = 0;
		size = 0;
		it = 0;
		it2 = 0;
		if (nbr < 0)
		{
			nbr = nbr * -1;
			sign = -1;
		}
		while (base[size])
			size++;
		while (nbr)
		{
			output[it] = (nbr % size) + 48;
			nbr = nbr / size;
			it++;
		}
		if (sign < 0)
		{
			output[it] = '-';
			it++;
		}
		while (it-- >= 0)
		{
			if (output[it] > 57)
				output[it] += 7;
			result[it2] = output[it];
			it2++;
		}
		printf("%s\n", result);
		return (3);
	}
	else return (0);
}

int		main()
{
	char str[] = "        --+1234 ab567";
	char dec[] = "0123456789";
	char bin[] = "01";
	char hex[] = "0123456789ABCDEF";
	char oct[] = "poneyvif";
	
	printf("%d\n", ft_atoi_base(str, bin));
}

//PORCODIO!
//STR IS ALREADY IN DECLARED BASE!
//CONVERT TO INT FFS
//PORCODIO!