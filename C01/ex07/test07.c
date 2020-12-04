#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int frw;
	int rvr;

	tmp = 0;
	frw = 0;
	rvr = size--;
	while (frw !=  rvr / 2)
	{
		tmp = *(tab + frw);
		*(tab + frw) = *(tab + rvr);
		*(tab + rvr) = tmp;
		frw++;
		rvr--;
	}
}

int	main(void)
{
	int tab[4];
	int size;
	int i;

	tab[0] = 12;
	tab[1] = 34;
	tab[2] = 56;
	tab[3] = 78;
	size = 4;
	ft_rev_int_tab(&tab[0], size);
	while (i != size)
	{
		printf("%d,", tab[i]);
		i++;
	}
}
