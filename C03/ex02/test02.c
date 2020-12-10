#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[20] = "cane";//HAS TO BE LARGE ENOUGH FOR SRC
	char src[] = "mag";

	//printf("ORIGINALE: %s\n", strcat(dest, src));
	printf("EMULAZIONE: %s\n", ft_strcat(dest, src));
}
