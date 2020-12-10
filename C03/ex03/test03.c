#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char dest[20] = "cane";
	char src[] = "magico";
	unsigned int n = 5;

	//printf("ORIGINALE: %s\n", strncat(dest, src, n));
	printf("EMULAZIONE: %s\n", ft_strncat(dest, src, n));
}
