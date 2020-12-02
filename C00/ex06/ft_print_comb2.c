/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:56:59 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/02 20:20:19 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb(int x, int y)
{
	ft_putchar(x / 10 + 48);
	ft_putchar(x % 10 + 48);
	ft_putchar(' ');
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;
	while (x < 99)
	{
		while (y <= 99)
		{
			if (x == 98)
			{
				write(1, "98 99\n", 6);
				return ;
			}
			else if (x < y)
			{
				ft_print_comb(x, y);
			}
			y++;
		}
		y = 0;
		x++;
	}
}
