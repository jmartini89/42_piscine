
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *tofind)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (tofind[i] == str[j])
		{
			k = j;
			while (tofind[i] == str[k])
			{
				i++;
				k++;
				if (tofind[i] == '\0')
					return (&str[j]);
				if (str[k] == '\0')
					k = 0;
			}
		}
		j++;
	}
	return ('\0');
}

int		main(void)
{
	char str[] = "Foo Bar Baz";
	char tofind[] = "ar";

	printf("ORIGINALE: %s\n", strstr(str, tofind));
	printf("EMULAZIONE: %s\n", ft_strstr(str, tofind));
}
