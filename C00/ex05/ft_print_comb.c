/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:27:50 by jmartini          #+#    #+#             */
/*   Updated: 2020/11/29 18:27:54 by jmartini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a < '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, ",", 1);
			write(1, " ", 1);
			c++;
			}
		b++;
		c = b + 1;
		}
	a++;
	b = a + 1;
	c = b + 1;
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
}
