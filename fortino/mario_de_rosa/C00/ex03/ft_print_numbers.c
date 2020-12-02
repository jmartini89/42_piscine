/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:51:07 by mde-rosa          #+#    #+#             */
/*   Updated: 2020/11/26 20:02:46 by mde-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char letter;

	letter = '0';
	while (letter <= '9')
	{
		ft_putchar(letter);
		letter++;
	}
}

int	main(void)
{
	ft_print_numbers();
}