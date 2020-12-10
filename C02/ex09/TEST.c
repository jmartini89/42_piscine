
int		ft_alphanum(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (3);
}

int ft_strlen(char *str)
{
   int size = 0;
   int i = 0;
   while(str[i] != '\0')
   {
       size++;
       i++;
   }
   return (size);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = (ft_strlen(str) -1 );
	while (i >= 0)
	{
		if (ft_alphanum(str[i]) == 2 && ft_alphanum(str[i - 1]) == 3)
		{
			str[i] = str[i] - 32;
		}
		else if (ft_alphanum(str[i]) == 1 && ft_alphanum(str[i - 1]) != 3)
		{
			str[i] = str[i] + 32;
		}
		i--;
	}
	return (str);
}
