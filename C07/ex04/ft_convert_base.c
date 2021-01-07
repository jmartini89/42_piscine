/* PRINCIPAL FUNCTIONS */

#include <stdlib.h>

int		ft_check_base(char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_check_base(base_from) && ft_check_base(base_to))
	{
		return nbr;
	}
	nbr = malloc(sizeof(NULL));
	return (nbr);
}

/*

nbr is ASCII, e.g. CHAR 'a' --> INT 97

check syntax of base_from & base_to

atoi nbr

convert CHAR nbr to INT using base_from

convert INT to CHAR base_to

*/