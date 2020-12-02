/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezuaro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:20:48 by ezuaro            #+#    #+#             */
/*   Updated: 2020/11/30 18:39:36 by ezuaro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
​
#include <unistd.h>
​
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
​
void	ft_putnbr(int nb)
{
	char nb_char;
​
	nb_char = nb + '0';
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		ft_putchar(nb_char);
	}
}