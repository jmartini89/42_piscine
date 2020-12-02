/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:04:19 by jmartini          #+#    #+#             */
/*   Updated: 2020/12/02 19:23:46 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a < '7')
	{
		b = a + 1;
		while (b < '8')
		{
			c = b + 1;
			while (c < '9')
			{
				ft_putchar(a, b, c);
				write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar(a, b, c);
}
