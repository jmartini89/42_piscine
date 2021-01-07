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
nbr is ASCII, e.g. 'a'

convert nbr src base_from to decimal int
then convert decimal int in char string to dest base

check if nbr is printable!
*/