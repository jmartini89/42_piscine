#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char nbr[] = "        -+2A ab567";
	char dec[] = "0123456789";//42
	char bin[] = "01";//101010
	char hex[] = "0123456789ABCDEF";//2A
	char oct[] = "poneyvif";//52
	char test[] = "ABCDEFGHIJKLMNO";
	char wrong[] = "AA";
	
	printf("%s\n", ft_convert_base(nbr, hex, dec));
}