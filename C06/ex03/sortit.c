#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
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

int		main()
{
	int it;		/*MAIN*/
	int it2;	/*SUB*/
	int n;
	int str[5] = {64, 10, 105, 22, 11};
	int candidate;

	it = 0;
	n = 5;		/*STRLEN has weird behaviour with (int *str), forcing value*/
	while (it < (n - 1))
	{
		candidate = it;
		it2 = it + 1;
		while (it2 < n)
		{
			if (str[it2] < str[candidate])
				candidate = it2;
			it2++;
		}
		ft_swap(&str[candidate], &str[it]);
		it++;
	}
	ft_print_str(str, n);
	return (0);
}