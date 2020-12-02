/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_comb2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:43:31 by mde-rosa          #+#    #+#             */
/*   Updated: 2020/12/01 15:22:25 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int a, int b)
{
	ft_putchar('0' + a / 10);
	ft_putchar('0' + a % 10);
	ft_putchar(' ');
	ft_putchar('0' + b / 10);
	ft_putchar('0' + b % 10);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_comb2();
}